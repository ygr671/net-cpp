/**
 * @file ToString.hpp
 * @brief Defines a single method to get objects as strings.
 * @author 
*/

#pragma once

#include <string>

class ToString
{
  virtual std::string to_string() const = 0;
};
