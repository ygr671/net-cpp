#include <iostream>
#include <memory>
#include <string>
#include <vector>

#include "include/MAC.hpp"
#include "include/IP.hpp"
#include "include/Node.hpp"
#include "include/Station.hpp"

int main()
{
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
      std::cout << *station << "\n";
    }
    else 
    {
      std::cout << "No !" << "\n";
    }
  }
  
  return 0;
}
