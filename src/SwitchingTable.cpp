#include "include/SwitchingTable.hpp"
#include "include/SwitchingTableEntry.hpp"
#include "include/MAC.hpp"
#include "include/IP.hpp"
#include <iosfwd>
#include <string>
#include <stdexcept>

SwitchingTable::SwitchingTable() {};

SwitchingTableEntry& SwitchingTable::get(const std::size_t index) const
{
  try 
  {
    return entries_.at(index);
  } 
  catch (std::out_of_range e)
  {
    throw std::runtime_error("Invalid index !");
  }
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
