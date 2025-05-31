#pragma once

#include <string>
#include <iosfwd>

class MAC
{
private:
  std::string address;
public:
  // Ctor
  MAC(const std::string& addr);

  const std::string& get() const;
  bool operator==(const MAC& other) const;
  std::string to_string() const;
};

std::ostream& operator<<(std::ostream& os, const MAC& mac);
