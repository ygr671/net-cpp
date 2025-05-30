#include "include/IP.hpp"

#include <iostream>
#include <exception>
#include <regex>

IP::IP(const std::string& addr) : address(addr) 
{
  if (addr.length() == 0)
    throw std::runtime_error("IP Address cannot be empty !");

  static const std::regex ip_pattern(R"(^(25[0-5]|2[0-4][0-9]|1?[0-9]{1,2})(\.(25[0-5]|2[0-4][0-9]|1?[0-9]{1,2})){3}$)");
  if (!std::regex_match(addr, ip_pattern))
    throw std::runtime_error(addr + " is an invalid IP Address !");
};

std::ostream& operator<<(std::ostream& os, const IP& ip) 
{
  os << ip.get();
  return os;
}

const std::string& IP::get() const
{
  return address;
}

bool IP::operator==(const IP& other) const
{
  return address == other.get();
}

