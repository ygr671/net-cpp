/**
 * @file IP.hpp
 * @brief Defines the IP class representing an IP address and subnet mask.
 * @author
*/
#pragma once

#include "../../utils/include/ToString.hpp"
#include <string>
#include <iosfwd>

/**
 * @class IP
 * @brief Used to represent an IP address.
 *
 * This class is used to represent an IP address using the address itself and its subnet mask
*/

class IP : public ToString
{
private:
  /// IP Address
  std::string address_;
  /// Subnet mask
  std::string mask_;
public:
  /**
   * @brief Ctor.
   * @param addr IP address 
   * @param mask Subnet mask
   * @example src/examples/ip_usage.cpp
  */
  IP(const std::string& addr, const std::string& mask);
  
  /**
   * @brief Get the IP.
   * @return IP as a string 
   * @example src/examples/ip_usage.cpp
  */
  std::string get() const;
  /**
   * @brief Get the IP address.
   * @return IP address string reference
   * @example src/examples/ip_usage.cpp
  */
  const std::string& get_address() const;
  /**
   * @brief Get the subnet mask.
   * @return Subnet mask string reference
   * @example src/examples/ip_usage.cpp
  */
  const std::string& get_mask() const;
  /**
   * @brief Compare two IP objects.
   * @param other Other IP to compare
   * @return true if they're the same, false else
   * @example src/examples/ip_usage.cpp
  */
  bool operator==(const IP& other) const;
  /**
   * @brief Stringify the IP representation as a formatted string.
   * @return IP representation
   * @example src/examples/ip_usage.cpp
  */
  std::string to_string() const;
};

/**
 * @brief Stream output operator for IP.
 * @param os Output stream
 * @param ip IP object to print
 * @return Reference to the output stream
 * @example src/examples/ip_usage.cpp
 * @relates IP
 */
std::ostream& operator<<(std::ostream& os, const IP& ip);
