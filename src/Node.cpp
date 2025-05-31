#include <stdexcept>
#include <string>
#include <iostream>

#include "include/Node.hpp"
#include "include/IP.hpp"
#include "include/MAC.hpp"

/*
class Node
{
private:
  IP m_ip;
  MAC m_mac; 
  std::string m_name;

public:
  // Ctor
  Node(const IP& ip, const MAC& mac, const std::string& name);
  
  // Dtor
  virtual ~Node() = default;

  const IP& getIP() const;
  const MAC& getMAC() const;
  const std::string& getName() const;
  bool operator==(const IP& other) const;
  friend std::ostream& operator<<(std::ostream& os, const Node& node);
};
*/

Node::Node(const std::string& ip, const std::string& mask, const std::string& mac, const std::string& name) : m_ip(ip, mask), m_mac(mac), m_name(name) 
{
  if (m_name.length() == 0)
    throw std::runtime_error("Name cannot be empty !");
};

const IP& Node::getIP() const
{
  return m_ip;
}

const MAC& Node::getMAC() const
{
  return m_mac;
}

const std::string& Node::getName() const
{
  return m_name;
}

bool Node::operator==(const Node& other) const
{
  return m_ip == other.getIP() && m_mac == other.getMAC() && m_name == other.getName();
}

std::ostream& operator<<(std::ostream& os, const Node& node)
{
  os << "Node : \n\tname : " << node.getName() << ",\n\tIP : " << node.getIP() << ",\n\tMAC : " << node.getMAC();
  return os;
}

std::string Node::to_string()
{
  return "Node(\n\tname : " + this->getName() + ", \n\tIP : " + this->getIP().to_string() + ", \n\tMAC : " + this->getMAC().to_string() + "\n)";
}
