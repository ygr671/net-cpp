#pragma once

#include <string>
#include <iosfwd>

class IP 
{
private:
  std::string address_;
  std::string mask_;
public:
  // Ctor
  IP(const std::string& addr, const std::string& mask);
  
  std::string get() const;
  const std::string& get_address() const;
  const std::string& get_mask() const;
  bool operator==(const IP& other) const;
  std::string to_string() const;
};

std::ostream& operator<<(std::ostream& os, const IP& ip);
