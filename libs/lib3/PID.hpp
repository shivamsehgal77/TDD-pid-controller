/**
 * @file PID.hpp
 * @author Shivam Sehgal (ssehgal7@umd.edu)
 * @brief 
 * @version 0.1
 * @date 2023-10-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#pragma once

class PIDController{
public:
    PIDController(double kp, double ki, double kd)
    : kp(kp), ki(ki), kd(kd){    
    }
    /**
     * @brief find's the actual velocity
     * 
     * @param tagetVelocity 
     * @param actualVelocity 
     * @return double 
     */
    double actualVelocity(double tagetVelocity, double actualVelocity);
    
    /**
     * @brief find the sum of error
     * 
     * @param error 
     * @return double 
     */
    double sumError(double error);
    
    /**
     * @brief find control output
     * 
     * @param error 
     * @param sumError 
     * @param lastError 
     * @return double 
     */
    double controlOutput(double error, double sumError, double lastError);

private:
    /**
     * @brief proportional gain
     * 
     */
    double kp;
    /**
     * @brief integral gain
     * 
     */
    double ki;
    /**
     * @brief derivative gain
     * 
     */
    double kd;

    /**
     * @brief last error
     * 
     */
    double lastError = 0;
};




