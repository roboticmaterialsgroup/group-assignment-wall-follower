#include <Arduino.h>
#include <Speed_controller.h>

enum ROBOT_STATE {ROBOT_IDLE, MEASURING_DISTANCE_SONAR};
ROBOT_STATE robot_state = ROBOT_IDLE;

Romi32U4ButtonA buttonA;

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  switch(robot_state)
  {
    case ROBOT_IDLE:
      Serial.println("Robot idle");
      if(buttonA.getSingleDebouncedRelease()) robot_state = MEASURING_DISTANCE_SONAR;
      break;
    
    case MEASURING_DISTANCE_SONAR:
      Serial.println("Distance measurement");
      if(buttonA.getSingleDebouncedRelease()){
        robot_state = ROBOT_IDLE;
      }
      break;

     default:
      Serial.println("Default");
  }
}