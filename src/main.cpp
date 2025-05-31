#include <iostream>

#include "include/MAC.hpp"
#include "include/IP.hpp"
#include "include/Node.hpp"

int main(void)
{
  Node node_valid("192.168.1.1", "AA:BB:CC:DD:FF:EE", "Station 1");

  std::cout << node_valid << "\n";
  return 0;
}
