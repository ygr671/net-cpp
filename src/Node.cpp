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

const MAC& Node::get_mac() const
{
  return mac_;
}

const std::string& Node::get_name() const
{
  return name_;
}
