#include "include/Station.hpp"
#include <iostream>

Station::Station(const std::string &mac, const std::string &name,
                 const std::string &address, const std::string &mask) : Node(mac, name), ip_(IP(address, mask)) {};

const IP& Station::getIP() const
{
  return ip_;
}

void Station::setIP(const IP &ip)
{
  ip_ = ip;
}

/*
const std::string& Node::getName() const 
{
  return name_;
}
*/ 

const MAC& Station::getMAC() const 
{
  return mac_;
}

const std::string& Station::getName() const
{
  return name_;
}

std::ostream& operator<<(std::ostream& os, const Station& station)
{
  os << "Station : \n\tName : " << station.getName() << ",\n\tMAC : " << station.getMAC() << ",\n\tIP : " << station.getIP();
  return os;
}

bool Station::operator==(const Station &other) const
{
  return getIP() == other.getIP() && getMAC() == other.getMAC() && getName() == other.getName();
}

std::string Station::to_string() const
{
  return "Station(\n\tName : " + getName() + ",\n\tMAC : " + getMAC().to_string() + ",\n\tIP : " + getIP().to_string() + "\n)";
}
