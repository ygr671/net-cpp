#pragma once

#include <string>
#include <iosfwd>

class IP 
{
private:
  std::string address;
public:
  // Ctor
  IP(const std::string& addr);

  const std::string& get() const;
  bool operator==(const IP& other) const;
  std::string to_string() const;
};

std::ostream& operator<<(std::ostream& os, const IP& ip);
