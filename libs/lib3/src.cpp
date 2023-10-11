/**
 * @file src.cpp
 * @author Krishna Hundekari (krishnah@umd.edu)
 * @brief A simple implementation of a PID controller.
 * @version 0.1
 * @date 2023-10-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include "PID.hpp"

// Function to calculate the actual velocity using PID control
double PIDController::actualVelocity(double targetVelocity,
    double actualVelocity) {
    double error;

    // Loop until the error is within an acceptable range
    do {
        // Calculate the error between target and actual velocity
        error = targetVelocity - actualVelocity;

        // Calculate the integral of the error over time
        double sumError = this->sumError(error);

        // Calculate the control output using PID formula
        double controlOutput = this->controlOutput(error, sumError, lastError);

        // Update the actual velocity with the control output
        actualVelocity += controlOutput;

        // Store the current error as the last error for the next iteration
        lastError = error;
    } while (error < 0.3);  // Continue until the error is in the range

    // Return the final actual velocity
    return actualVelocity;
}

// Function to calculate the integral of the error over time
double PIDController::sumError(double error) {
    static double sumError = 0;

    // Accumulate the error over time with a time constant of 0.1
    sumError += error * 0.1;

    // Return the accumulated sum of errors
    return sumError;
}

// Function to calculate the control output using the PID formula
double PIDController::controlOutput(double error,
                            double sumError, double lastError) {
    // Calculate the control output based on the PID formula
    double controlOutput = this->kp * error + this->ki * sumError
                                + this->kd * (error - lastError);

    // Return the calculated control output
    return controlOutput;
}
