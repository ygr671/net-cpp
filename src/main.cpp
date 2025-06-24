#include <iostream>
#include <memory>
#include <string>
#include <vector>

#include "include/MAC.hpp"
#include "include/IP.hpp"
#include "include/Node.hpp"
#include "include/Station.hpp"
#include "include/SwitchingTableEntry.hpp"
int main()
{
  /* 
  std::vector<std::unique_ptr<Node>> nodes;
  
  for (size_t i = 0 ; i < 5 ; i++)
  {
    nodes.push_back(std::make_unique<Station>("AA:BB:CC:DD:EE:FF", "PC" + std::to_string(i), "192.168.1." + std::to_string(i), "24"));
  }

  std::cout << "Count of nodes in the network : " << nodes.size() << "\n";

  for (const std::unique_ptr<Node>& node : nodes)
  {
    if (Station * station = dynamic_cast<Station *>(node.get()))
    {
      std::cout << (*station).to_string() << "\n";
    }
    else 
    {
      std::cout << "No !" << "\n";
    }
  }
  */
  
  std::vector<SwitchingTableEntry> entries;

  for (size_t i = 0 ; i < 5 ; i++)
  {
    entries.push_back(SwitchingTableEntry("AA:BB:CC:DD:EE:FF", "192.168.1." + std::to_string(i), "24"));
  }


  for (const SwitchingTableEntry& entry : entries)
  {
    std::cout << entry.to_string() << "\n";
  }

  SwitchingTableEntry entry("AA:BB:CC:DD:EE:FF", "192.168.1.0", "24");

  std::cout << ((entries[0] == entries[1]) ? "Pareil" : "Pas pareil") << "\n";
  std::cout << ((entries[0] == entries[0]) ? "Pareil" : "Pas pareil") << "\n";
  std::cout << ((entries[0] == entry) ? "Pareil" : "Pas pareil") << "\n";

  return 0;
}
