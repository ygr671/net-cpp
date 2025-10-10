#include "../include/IP.hpp"
#include <iostream>

int main()
{
  // Create an IP object
  IP ip("127.0.0.1", "32");

  // get() method showcase
  std::cout << ip.get() << "\n"; // -> "127.0.0.1/32"
  
  // get_address() method showcase
  std::cout << ip.get_address() << "\n"; // -> "127.0.0.1"
  
  // get_mask() method showcase
  std::cout << ip.get_mask() << "\n"; // -> "32"
  
  // operator== overloading showcase
  IP other_ip("192.168.0.1", "32");
  std::cout << ((ip == other_ip) ? "true" : "false") << "\n"; // -> false
  
  // to_string() method showcase
  std::string result = ip.to_string(); // -> IP(address_ : "127.0.0.1", mask_ : "32")
  
  // operator<< overloading showcase
  std::cout << ip << "\n";

  return 0;
}
