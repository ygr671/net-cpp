/**
 * @file ToString.hpp
 * @brief Defines a single method to get objects as strings.
 * @author Muhammed ERDAL
*/

#pragma once

#include <string>

/**
 * @class ToString
 * @brief Inherited in other classes to give them the to_string() method.
*/

class ToString
{
public:
  /**
   * @brief Destructor.
   */
  virtual ~ToString() = default;
  /**
   * @brief Get the object formatted as a string.
   * @return Object as a string
  */
  virtual std::string to_string() const = 0;
};
