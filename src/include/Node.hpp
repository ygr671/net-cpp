#pragma once

#include <exception>
#include <string>
#include <iosfwd>
#include "IP.hpp"
#include "MAC.hpp"

class Node
{
private:
  MAC mac_;
  std::string name_;

public:
  // Ctor
  Node(const std::string& mac, const std::string& name);
  
  // Dtor
  virtual ~Node() = default;

  const MAC& getMAC() const;
  const std::string& getName() const;
  bool operator==(const Node& other) const;
  friend std::ostream& operator<<(std::ostream& os, const Node& node);
  std::string to_string() const;
};
