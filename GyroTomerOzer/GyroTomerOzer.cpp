#include "GyroTomerOzer.h"
#include <Arduino.h>
#include <Wire.h>
#include <MPU6050_light.h>


MPU6050 mpu(Wire);

GyroTomerOzer::GyroTomerOzer(){}

void GyroTomerOzer::calibrateMPU() {
    mpu.begin();
    Serial.begin(115200);
    mpu.calcOffsets();
    Serial.println("MPU calibration complete.");

}

int GyroTomerOzer::getYaw() {
    mpu.update();
    return mpu.getAngleZ();
}


int GyroTomerOzer::getPitch() {
    mpu.update();
    return mpu.getAngleX();
}

int GyroTomerOzer::getRoll() {
    mpu.update();
    return mpu.getAngleY();
}

void GyroTomerOzer::WriteYaw() {
  int yaw = getYaw();
  Serial.print("| YAW =");
  Serial.print(yaw);
  Serial.println(" |");
}

void GyroTomerOzer::WritePitch() {
  int Pitch = getPitch();
  Serial.print("| Pitch =");
  Serial.print(Pitch);
  Serial.println(" |");
}

void GyroTomerOzer::WriteRoll() {
  int Roll = getRoll();
  Serial.print("| Roll =");
  Serial.print(Roll);
  Serial.println(" |");
}


void GyroTomerOzer::WriteData() {
  int Roll = getRoll();
  int Pitch = getPitch();
  int yaw = getYaw();
  Serial.print("| YAW = ");
  Serial.print(yaw);
  Serial.print("  |");
  Serial.print(" | Pitch = ");
  Serial.print(Pitch);
  Serial.print("|");
  Serial.print(" | Roll = ");
  Serial.print(Roll);
  Serial.println(" |");
  delay(100);
}
