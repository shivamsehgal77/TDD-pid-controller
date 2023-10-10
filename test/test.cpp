#include <gtest/gtest.h>
#include "PID.hpp"

TEST(first_test, this_should_pass) {
  PIDController controller(0.3, 0.9, 0.6);
  double outout_velocity = controller.actualVelocity(15.0, 10.0);
  ASSERT_NEAR(15.0, outout_velocity, 1); 
}

TEST(second_test, this_should_pass) {
  PIDController controller(0.3, 0.9, 0.6);
  double outout_velocity = controller.actualVelocity(50.0, 30.0);
  ASSERT_NEAR(50.0, outout_velocity, 1); 
}