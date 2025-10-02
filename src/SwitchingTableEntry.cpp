#include "include/SwitchingTableEntry.hpp"
#include "include/MAC.hpp"
#include "include/IP.hpp"
#include <iosfwd>
#include <string>

SwitchingTableEntry::SwitchingTableEntry(const std::string& mac, const std::string& addr, const std::string& mask) : mac_(mac), ip_(addr, mask) {};

const MAC& SwitchingTableEntry::get_mac() const
{
  return mac_;
}

const IP& SwitchingTableEntry::get_ip() const
{
  return ip_;
}

bool SwitchingTableEntry::operator==(const SwitchingTableEntry& other) const
{
  return get_ip() == other.get_ip() && get_mac() == other.get_mac();
}

std::string SwitchingTableEntry::to_string() const
{
  return "SwitchingTableEntry(\n\tMAC : " + get_mac().to_string() + ",\n\tIP : " + get_ip().to_string() + "\n)";
}
