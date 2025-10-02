/*
#pragma once

#include "SwitchingTableEntry.hpp"
#include <vector>
#include <iosfwd>

class SwitchingTable 
{
private:
  std::vector<SwitchingTableEntry> _entries;
public:
  // Ctor
  SwitchingTable();
  
  SwitchingTableEntry& get(const std::size_t index) const;
  void add_entry(const SwitchingTableEntry& entry);
  void 
  const std::size_t& get_entry_count() const;
  bool operator==(const SwitchingTable& other) const;
  std::string to_string() const;
};

std::ostream& operator<<(std::ostream& os, const SwitchingTable& );
*/
