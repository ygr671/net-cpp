#pragma once

#include <exception>
#include <string>
#include <iosfwd>
#include "IP.hpp"
#include "MAC.hpp"

class Node
{
private:
  IP m_ip;
  MAC m_mac; 
  std::string m_name;

public:
  // Ctor
  Node(const std::string& ip, const std::string& mask, const std::string& mac, const std::string& name);
  
  // Dtor
  virtual ~Node() = default;

  const IP& getIP() const;
  const MAC& getMAC() const;
  const std::string& getName() const;
  bool operator==(const Node& other) const;
  friend std::ostream& operator<<(std::ostream& os, const Node& node);
  std::string to_string();
};
