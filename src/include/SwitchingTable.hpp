#pragma once

#include "SwitchingTableEntry.hpp"
#include <map>
#include <iosfwd>

class SwitchingTable 
{
private:
  std::map<std::size_t, SwitchingTableEntry> entries_;
public:
  // Ctor
  SwitchingTable();
  
  SwitchingTableEntry& get(const std::size_t index) const;
  SwitchingTableEntry& operator[](std::size_t index);
  void add_entry(const SwitchingTableEntry& entry);
  // Remove by the object
  void remove_entry(const SwitchingTableEntry& entry);
  // Remove by the index/port
  void remove_entry(const std::size_t index);
  const std::size_t& get_entry_count() const;
  bool operator==(const SwitchingTable& other) const;
  std::string to_string() const;
};

std::ostream& operator<<(std::ostream& os, const SwitchingTable& );
