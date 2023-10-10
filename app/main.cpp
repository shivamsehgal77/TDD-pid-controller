#include "PID.hpp"
#include <iostream>

int main() {
  PIDController controller_1 = PIDController(0.3, 0.9, 0.6);
  double actualVelocity = controller_1.actualVelocity(15.0, 10.0);
  std::cout<<"Actual Velocity : "<<actualVelocity<<std::endl;
}

