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
  

  /*
  SwitchingTableEntry entry_same("AA:BB:CC:DD:EE:FF", "192.168.1.0", "24");
  SwitchingTableEntry entry_different("AA:BB:CC:DD:EE:FF", "192.168.1.0", "24");

  SwitchingTableEntry entry("AA:BB:CC:DD:EE:FF", "192.168.1.0", "23");

  std::cout << ((entry_same == entry) ? "Pareil" : "Pas pareil") << "\n"; // Pas pareil 
  std::cout << ((entry_same == entry_different) ? "Pareil" : "Pas pareil") << "\n"; // Pas pareil 
  */
  
  IP ip1("192.168.1.1", "24");
  IP ip2("192.168.1.1", "23"); 
  
  std::cout << ((ip1 == ip2) ? "Same" : "Different") << "\n";

  return 0;
}
