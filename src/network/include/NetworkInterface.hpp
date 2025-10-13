/**
 * @file NetworkInterface.hpp
 * @brief Defines the NetworkInterface class representing a network interface inspired by Linux ones.
 * @author Muhammed ERDAL
*/
#pragma once

#include "../../utils/include/ToString.hpp"
#include "IP.hpp"
#include "MAC.hpp"
// TODO : include state enum header file.

/**
 * @class NetworkInterface 
 * @brief Used to represent a network interface.
 *
 * This class is used to represent a network interface using an IPv4 address, subnet mask, MAC address, state and interface name.
*/
class NetworkInterface : public ToString
{
private:
  /// Interface's name
  std::string name_;
  /// Interface's IP
  IP ip_;
  /// Interface's MAC
  MAC mac_;
  // TODO : state enum type member.
public:
  /**
   * @brief Constructor.
   * @param name Interface's name.
   * @param ip_addr IP address.
   * @param mask Subnet mask.
   * @param mac_addr MAC address.
   * @throws std::runtime_error if either name, address, mask or mac address are empty/invalid.
  */
  NetworkInterface(const std::string& name, const std::string& ip_addr, const std::string& mask, const std::string& mac_addr);
  
  /**
   * @brief Constructor.
   * @param name Interface's name.
   * @param ip IP object.
   * @param mac MAC object. 
   * @throws std::runtime_error if either name, address, mask or mac address are empty/invalid.
  */
  NetworkInterface(const std::string& name, const IP& ip, const MAC& mac);
  
  // TODO : transit method for Frame received objects to simulate frame transit through interfaces.
 
  /**
   * @brief Stringify the NetworkInterface as a formatted string.
   * @return NetworkInterface representation.
  */
  std::string to_string() const override;
};
