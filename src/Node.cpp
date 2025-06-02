#include <stdexcept>
#include <string>
#include <iostream>

#include "include/Node.hpp"
#include "include/IP.hpp"
#include "include/MAC.hpp"

unsigned short Node::node_count_ = 0;

Node::Node(const std::string& ip, const std::string& mask, const std::string& mac, const std::string& name) : id_(node_count_), ip_(ip, mask), mac_(mac), name_(name) 
{
  if (name.length() == 0)
    throw std::runtime_error("Name cannot be empty !");
  node_count_++;
};

const unsigned short Node::getID() const
{
  return id_;
}

const IP& Node::getIP() const
{
  return ip_;
}

const MAC& Node::getMAC() const
{
  return mac_;
}

const std::string& Node::getName() const
{
  return name_;
}

bool Node::operator==(const Node& other) const
{
  return ip_ == other.getIP() && mac_ == other.getMAC() && name_ == other.getName();
}

std::ostream& operator<<(std::ostream& os, const Node& node)
{
  os << "Node : \n\tID : " <<  node.getID() << "\n\tname : " << node.getName() << ",\n\tIP : " << node.getIP() << ",\n\tMAC : " << node.getMAC();
  return os;
}

std::string Node::to_string()
{
  return "Node(\n\tID : " + std::to_string(this->getID()) + "\n\tName : " + this->getName() + ", \n\tIP : " + this->getIP().to_string() + ", \n\tMAC : " + this->getMAC().to_string() + "\n)";
}
