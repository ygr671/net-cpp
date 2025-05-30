#pragma once

#include <string>
#include <iostream>

class IP 
{
private:
  std::string address;
public:
  // Ctor
  IP(const std::string& addr);

  const std::string& get() const;
  bool operator==(const IP& other) const;
};

std::ostream& operator<<(std::ostream& os, const IP& ip);
