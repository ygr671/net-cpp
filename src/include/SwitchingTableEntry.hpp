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
  
  const MAC& get_mac() const;
  const IP& get_ip() const;
  bool operator==(const SwitchingTableEntry& other) const;
  std::string to_string() const;
};

std::ostream& operator<<(std::ostream& os, const SwitchingTableEntry& entry);
