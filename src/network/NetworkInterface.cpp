#include "NetworkInterface.hpp"
#include "include/IP.hpp"
#include "include/MAC.hpp"

#include <stdexcept>
#include <string>

NetworkInterface::NetworkInterface(const std::string& name, const std::string& ip_addr, const std::string& mask, const std::string& mac_addr) : name_(name), ip_(ip_addr, mask), mac_(mac_addr)
{
  if (name.empty())
    throw std::runtime_error("Interface name cannot be empty !");
}

NetworkInterface::NetworkInterface(const std::string& name, const IP& ip, const MAC& mac) : name_(name), ip_(ip), mac_(mac)
{
  if (name.empty())
    throw std::runtime_error("Interface name cannot be empty !");
}

std::string NetworkInterface::to_string() const
{
  // TODO : do it
  return "";
}

/* TODO : do it
bool IP::operator==(const NetworkInterface& other) const
{
}
*/

/* TODO : do it
std::ostream& operator<<(std::ostream& os, const NetworkInterface& ni) 
{
  
  return os;
}
*/
