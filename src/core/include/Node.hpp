/**
 * @file Node.hpp
 * @brief Defines the Node class representing a node.
 * @author Muhammed ERDAL
*/

#pragma once

#include "../../utils/include/ToString.hpp"

/**
 * @class Node 
 * @brief Used to represent a node.
 *
 * This class is used to represent a node (station, switch, router, etc). Is inherited by each concrete Node class.
*/
class Node : public ToString
{
protected:
  /**
  * @brief Constructor.
  */
  Node() = default;
public:
  /**
  * @brief Destructor.
  */
  virtual ~Node() = default;
  
  /**
   * @brief Stringify the Node representation as a formatted string.
   * @return IP representation.
  */
  std::string to_string() const override;
};
