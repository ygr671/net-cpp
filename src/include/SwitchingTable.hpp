#pragma once

#include <string>
#include <iosfwd>

class IP 
{
private:
public:
  // Ctor
  IP(const std::string& addr, const std::string& mask);
  
  std::string get() const;
  const std::string& getAddress() const;
  bool operator==(const IP& other) const;
  std::string to_string() const;
};

std::ostream& operator<<(std::ostream& os, const IP& );
