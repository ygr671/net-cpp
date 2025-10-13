/**
 * @file IP.hpp
 * @brief Defines the IP class representing an IP address and subnet mask.
 * @author Muhammed ERDAL
*/
#pragma once

#include "../../utils/include/ToString.hpp"
#include <string>
#include <iosfwd>

/**
 * @class IP
 * @brief Used to represent an IP address.
 *
 * This class is used to represent an IP address using the address itself and its subnet mask.
*/

class IP : public ToString
{
private:
  /// IP Address.
  std::string address_;
  /// Subnet mask.
  std::string mask_;
public:
  /**
   * @brief Constructor.
   * @param addr IP address 
   * @param mask Subnet mask
   * @throws std::runtime_error if either address or mask or both are empty/invalid
  */
  IP(const std::string& addr, const std::string& mask);
  
  /**
   * @brief Get the IP.
   * @return IP as a string.
  */
  std::string get() const;
  /**
   * @brief Get the IP address.
   * @return IP address string reference.
  */
  const std::string& get_address() const;
  /**
   * @brief Get the subnet mask.
   * @return Subnet mask string reference.
  */
  const std::string& get_mask() const;
  /**
   * @brief Compare two IP objects.
   * @param other Another IP to compare.
   * @return true if they're the same, false else.
  */
  bool operator==(const IP& other) const;
  /**
   * @brief Stringify the IP representation as a formatted string.
   * @return IP representation.
  */
  std::string to_string() const override;
};

/**
 * @brief Stream output operator for IP.
 * @param os Output stream.
 * @param ip IP object to print.
 * @return Reference to the output stream.
 * @relates IP
 */
std::ostream& operator<<(std::ostream& os, const IP& ip);
