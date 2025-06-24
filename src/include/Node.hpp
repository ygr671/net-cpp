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

  virtual const MAC& getMAC() const = 0;
  virtual const std::string& getName() const = 0;
  bool operator==(const Node& other);
  // friend std::ostream& operator<<(std::ostream& os, const Node& node);
  virtual std::string to_string() const = 0;
};
