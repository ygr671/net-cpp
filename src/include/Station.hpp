#pragma once

#include "Node.hpp"

class Station : public Node
{
private:
  IP ip_;
public:
  // Ctor
  Station(const std::string& mac, const std::string& name, const std::string &address, const std::string &mask);
  const IP& getIP() const;
  void setIP(const IP& ip);
  bool operator==(const Station& other) const override;
  friend std::ostream& operator<<(std::ostream& os, const Station& station);
  std::string to_string() const override;
};
