#ifndef GYROTOMEROZER_H
#define GYROTOMEROZER_H

#include <Arduino.h>
#include <Wire.h>
#include <MPU6050_light.h>

class GyroTomerOzer {
public:
    GyroTomerOzer();
    void calibrateMPU();
    int getYaw();
    int getPitch();
    int getRoll();
    void WriteYaw();
    void WritePitch();
    void WriteRoll();
    void WriteData();

private:
    MPU6050 mpu = MPU6050(Wire); 
};

#endif
