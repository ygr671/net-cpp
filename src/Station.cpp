#include "include/Station.hpp"
#include <iostream>

Station::Station(const std::string &mac, const std::string &name,
                 const std::string &address, const std::string &mask) : Node(mac, name), ip_(IP(address, mask)) {};

const IP& Station::get_ip() const
{
  return ip_;
}

void Station::set_ip(const IP &ip)
{
  ip_ = ip;
}

const MAC& Station::get_mac() const 
{
  return mac_;
}

const std::string& Station::get_name() const
{
  return name_;
}

std::ostream& operator<<(std::ostream& os, const Station& station)
{
  os << "Station : \n\tName : " << station.get_name() << ",\n\tMAC : " << station.get_mac() << ",\n\tIP : " << station.get_ip();
  return os;
}

bool Station::operator==(const Station &other) const
{
  return get_ip() == other.get_ip() && get_mac() == other.get_mac() && get_name() == other.get_name();
}

std::string Station::to_string() const
{
  return "Station(\n\tName : " + get_name() + ",\n\tMAC : " + get_mac().to_string() + ",\n\tIP : " + get_ip().to_string() + "\n)";
}
