#include "include/SwitchingTableEntry.hpp"
#include "include/MAC.hpp"
#include "include/IP.hpp"
#include <iosfwd>
#include <string>

SwitchingTableEntry::SwitchingTableEntry(const std::string& mac, const std::string& addr, const std::string& mask) : mac_(mac), ip_(addr, mask) {};

const MAC& SwitchingTableEntry::getMAC() const
{
  return mac_;
}

const IP& SwitchingTableEntry::getIP() const
{
  return ip_;
}

bool SwitchingTableEntry::operator==(const SwitchingTableEntry& other) const
{
  return getIP() == other.getIP() && getMAC() == other.getMAC();
}

std::string SwitchingTableEntry::to_string() const
{
  return "SwitchingTableEntry(\n\tMAC : " + getMAC().to_string() + ",\n\tIP : " + getIP().to_string() + "\n)";
}
