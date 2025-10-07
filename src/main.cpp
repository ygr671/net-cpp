#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <vector>
#include <exception>
#include "include/MAC.hpp"
#include "include/IP.hpp"
#include "include/Node.hpp"
#include "include/Station.hpp"
#include "include/SwitchingTableEntry.hpp"

int main()
{
  try 
  {
    SwitchingTableEntry entry1("AA:BB:CC:DD:EE:FF", "192.168.1.1", "24");
    std::cout << entry1.to_string() << "\n";
  } 
  catch (std::runtime_error e) 
  {
    std::cout << "Error : " << e.what() << "\n";
  }

  return 0;
}
