#include <gtest/gtest.h>
#include "PID.hpp"

TEST(first_test, this_should_pass) {
  PIDController controller(0.1,0.01,0.2);
  double outout_velocity = controller.actualVelocity(15.0, 10.0);
  ASSERT_NEAR(15.0, outout_velocity, 1); 
}

TEST(second_test, this_should_pass) {
  PIDController controller(0.1,0.01,0.2);
  double outout_velocity = controller.actualVelocity(90.0, 100.0);
  ASSERT_NEAR(90.0, outout_velocity, 1); 
}