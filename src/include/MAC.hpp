#pragma once

#include <string>
#include <iostream>

class MAC
{
private:
  std::string address;
public:
  // Ctor
  MAC(const std::string& addr);

  const std::string& get() const;
  bool operator==(const MAC& other) const;
};

std::ostream& operator<<(std::ostream& os, const MAC& mac);
