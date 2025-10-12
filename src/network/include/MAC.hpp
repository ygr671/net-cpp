#pragma once

#include "../../utils/include/ToString.hpp"
#include <string>
#include <iosfwd>

class MAC : public ToString
{
private:
  std::string address_;
public:
  // Ctor
  MAC(const std::string& addr);

  const std::string& get() const;
  bool operator==(const MAC& other) const;
  std::string to_string() const;
};

std::ostream& operator<<(std::ostream& os, const MAC& mac);
