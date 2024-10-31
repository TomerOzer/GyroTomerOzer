#include "GyroTomerOzer.h"

GyroTomerOzer Gyro;

/*
Simple Gyro Arduino Class.
Can return Yaw, Pitch and Roll angles.
By Tomer Ozer.
*/
void setup() {
  Gyro.calibrateMPU(); 

}

void loop() {
  Gyro.WriteData();
  }


