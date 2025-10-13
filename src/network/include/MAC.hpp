/**
 * @file MAC.hpp
 * @brief Defines the MAC class representing a MAC address.
 * @author Muhammed ERDAL
*/

#pragma once

#include "../../utils/include/ToString.hpp"
#include <string>
#include <iosfwd>

/**
 * @class MAC
 * @brief Used to represent a MAC address.
 *
 * This class is used to a MAC address.
*/

class MAC : public ToString
{
private:
  /// MAC address.
  std::string address_;
public:
  /**
   * @brief Constructor.
   * @param addr MAC address
   * @throws std::runtime_error if addr is an invalid MAC address.
   */
  MAC(const std::string& addr);

  /**
   * @brief Get the MAC address as a string.
   * @return reference to the MAC address.
   */
  const std::string& get() const;
  /**
   * @brief Compare two MAC objects.
   * @param other Another MAC to compare.
   * @return true if they're the same, false else.
   */
  bool operator==(const MAC& other) const;
  /**
   * @brief Stringify the MAC representation as a formatted string.
   * @return MAC representation.
  */
  std::string to_string() const override;
};

/**
 * @brief Stream output operator for MAC.
 * @param os Output stream.
 * @param mac MAC object to print.
 * @return Reference to the output stream.
 * @relates MAC
 */
std::ostream& operator<<(std::ostream& os, const MAC& mac);
