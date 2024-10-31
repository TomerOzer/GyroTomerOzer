GyroTomerOzer:

GyroTomerOzer is a simple MPU6050 library for Arduino.

Functions:
  calibrateMPU(): Initializes and calibrates the MPU6050.
  getYaw(), getPitch(), getRoll(): Returns yaw, pitch, or roll angles.
  WriteYaw(), WritePitch(), WriteRoll(), WriteData(): Prints angles to Serial Monitor.

Simple Usage:

#include <GyroTomerOzer.h>
GyroTomerOzer gyro;

void setup() {
    Serial.begin(115200);
    gyro.calibrateMPU();
}

void loop() {
    gyro.WriteData();  

}
