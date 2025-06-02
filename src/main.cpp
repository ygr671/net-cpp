#include <iostream>

#include "include/MAC.hpp"
#include "include/IP.hpp"
#include "include/Node.hpp"

int main(void)
{
  Node pc1("1.1.1.1", "24", "AA:BB:CC:DD:EE:FF","PC1");
  std::cout << pc1 << "\n";
  return 0;
}
