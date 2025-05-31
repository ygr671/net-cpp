#include "include/IP.hpp"

#include <iostream>
#include <exception>
#include <regex>

IP::IP(const std::string& addr, const std::string& mask) : m_address(addr), m_mask(mask) 
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
  return m_address + "/" + m_mask;
}

const std::string& IP::getAddress() const
{
  return m_address;
}

const std::string& IP::getMask() const
{
  return m_mask;
}

bool IP::operator==(const IP& other) const
{
  return m_address == other.getAddress() && m_mask == other.getMask();
}

std::string IP::to_string() const
{
  return "IP(\n\tm_address : " + m_address + ",\n\tm_mask : " + m_mask + "\n)";
}
