#include "include/Station.hpp"

Station::Station(const std::string &mac, const std::string &name,
                 const std::string &address, const std::string &mask) : Node(mac, name), ip_(IP(address, mask)) {};

const IP &Station::getIP() const
{
  return ip_;
}

void Station::setIP(const IP &ip)
{
  ip_ = ip;
}

bool Station::operator==(const Station &other) const
{
  return Node::operator==(other) && ip_ == other.ip_;
}

std::ostream& operator<<(std::ostream& os, const Station& station)
{
  os << "Station : \n\tName : " << station.getName() << ",\n\tMAC : " << station.getMAC() << ",\n\tIP : " << station.getIP();
  return os;
}

std::string Station::to_string() const
{
  return "Station(\n\tName : " + getName() + ",\n\tMAC : " + getMAC().to_string() + ",\n\tIP : " + getIP().to_string() + "\n)";
}