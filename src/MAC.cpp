#include "include/MAC.hpp"

#include <iostream>
#include <exception>
#include <regex>

MAC::MAC(const std::string& addr) : address_(addr) 
{
  if (addr.length() == 0)
    throw std::runtime_error("MAC Address cannot be empty !");
  if (addr.length() != 17)
    throw std::runtime_error(addr + " is an invalid MAC Address !");

  static const std::regex mac_pattern("^([0-9A-Fa-f]{2}:){5}[0-9A-Fa-f]{2}$");
  if (!std::regex_match(addr, mac_pattern))
    throw std::runtime_error(addr + " is an invalid MAC Address !");
};

std::ostream& operator<<(std::ostream& os, const MAC& mac) 
{
  os << mac.get();
  return os;
}

const std::string& MAC::get() const
{
  return address_;
}

bool MAC::operator==(const MAC& other) const
{
  return address_ == other.get();
}

std::string MAC::to_string() const
{
  return "MAC(address_ : " + address_ + ")";
}
