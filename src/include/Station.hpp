#pragma once

#include "Node.hpp"

class Station : public Node
{
private:
  IP ip_;
public:
  // Ctor
  Station(const std::string& mac, const std::string& name, const std::string &address, const std::string &mask);
  // Dtor
  ~Station() = default;

  const IP& get_ip() const;
  void set_ip(const IP& ip);
  const MAC& get_mac() const override;
  const std::string& get_name() const override;
  bool operator==(const Station& other) const;
  friend std::ostream& operator<<(std::ostream& os, const Station& station);
  std::string to_string() const override;
};
