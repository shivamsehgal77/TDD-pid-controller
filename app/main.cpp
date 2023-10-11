/**
 * @file main.cpp
 * @author Shivam Sehgal (ssehgal7@umd.edu)
 * @brief A simple example of a PID controller.
 * @version 0.1
 * @date 2023-10-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include "PID.hpp"

int main() {
  // object of class PIDController Created
  PIDController controller_1 = PIDController(0.3, 0.9, 0.6);
  double actualVelocity = controller_1.actualVelocity(15.0, 10.0);
  // Display the result.
  std::cout << "Actual Velocity : " << actualVelocity << std::endl;
}
