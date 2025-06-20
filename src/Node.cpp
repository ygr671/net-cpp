#include <stdexcept>
#include <string>
#include <iostream>

#include "include/Node.hpp"
#include "include/MAC.hpp"


Node::Node(const std::string& mac, const std::string& name) : mac_(mac), name_(name)
{
  if (name.empty())
    throw std::runtime_error("Name cannot be empty !");
};

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
  return mac_ == other.getMAC() && name_ == other.getName();
}

std::ostream& operator<<(std::ostream& os, const Node& node)
{
  os << "Node : \n\tname : " << node.getName() << ",\n\tMAC : " << node.getMAC();
  return os;
}

std::string Node::to_string() const
{
  return "Node(\n\tName : " + this->getName() + ", \n\tMAC : " + this->getMAC().to_string() + "\n)";
}
