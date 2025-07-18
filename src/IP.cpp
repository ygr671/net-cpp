#include "include/IP.hpp"

#include <iostream>
#include <exception>
#include <regex>

IP::IP(const std::string& addr, const std::string& mask) : address_(addr), mask_(mask) 
{
  if (addr.empty())
    throw std::runtime_error("IP Address cannot be empty !");

  if (mask.empty())
    throw std::runtime_error("Mask cannot be empty !");
  
  static const std::regex ip_pattern(R"(^(25[0-5]|2[0-4][0-9]|1?[0-9]{1,2})(\.(25[0-5]|2[0-4][0-9]|1?[0-9]{1,2})){3}$)");
  static const std::regex cidr_pattern(R"(^(3[0-2]|[1-2]?[0-9])$)");
  if (!std::regex_match(addr, ip_pattern))
    throw std::runtime_error(addr + " is an invalid IP Address !");

  if (!std::regex_match(mask, cidr_pattern))
    throw std::runtime_error(mask + " is an invalid mask !");
};

std::ostream& operator<<(std::ostream& os, const IP& ip) 
{
  os << ip.getAddress() << "/" << ip.getMask();
  return os;
}

std::string IP::get() const
{
  return address_ + "/" + mask_;
}

const std::string& IP::getAddress() const
{
  return address_;
}

const std::string& IP::getMask() const
{
  return mask_;
}

bool IP::operator==(const IP& other) const
{
  return address_ == other.getAddress() && mask_ == other.getMask();
}

std::string IP::to_string() const
{
  return "IP(address_ : " + address_ + ", mask_ : " + mask_ + ")";
}
