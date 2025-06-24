/*
#pragma once

#include <string>
#include "MAC.hpp"
#include "IP.hpp"
#include <iosfwd>

class SwitchingTableEntry
{
private:
  MAC mac_;
  IP ip_;
public:
  // Ctor
  SwitchingTableEntry(const std::string& mac, const std::string& addr, const std::string& mask);
  
  const MAC& getMAC() const;
  const IP& getIP() const;
  bool operator==(const SwitchingTableEntry& other) const;
  std::string to_string() const;
};

std::ostream& operator<<(std::ostream& os, const SwitchingTableEntry& entry);
*/ 

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
