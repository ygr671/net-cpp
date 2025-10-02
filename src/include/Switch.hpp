#pragma once

#include "Node.hpp"
#include <string>


class Switch : Node
{
private:
  std::vector<SwitchingTableEntry> entries_;
};
