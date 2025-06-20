#include <iostream>

#include "include/MAC.hpp"
#include "include/IP.hpp"
#include "include/Node.hpp"
#include "include/Station.hpp"

int main()
{
  Station station1("AA:BB:CC:DD:EE:FF", "PC1", "192.168.1.1", "32");

  std::cout << station1.to_string() << "\n";
  return 0;
}
