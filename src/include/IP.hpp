#pragma once

#include <string>
#include <iosfwd>

class IP 
{
private:
  std::string m_address;
  std::string m_mask;
public:
  // Ctor
  IP(const std::string& addr, const std::string& mask);
  
  std::string get() const;
  const std::string& getAddress() const;
  const std::string& getMask() const;
  bool operator==(const IP& other) const;
  std::string to_string() const;
};

std::ostream& operator<<(std::ostream& os, const IP& ip);
