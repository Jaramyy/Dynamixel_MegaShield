#include <DynamixelMEGA_Shield.h>
#include <Wire.h>

byte dataCommand[3];
byte dataSend[3];


void setup()
{
  Serial.begin(9600);

  Dynamixel.begin(57142);
  Dynamixel.setEndless(1, ON);
  Dynamixel.setEndless(2, ON);
  Dynamixel.setEndless(3, ON);
  Dynamixel.setEndless(4, ON);
  Dynamixel.setGoalAccel(1,35);
  Dynamixel.setGoalAccel(2,35);
  Dynamixel.setGoalAccel(3,35);
  Dynamixel.setGoalAccel(4,35);

}
void loop() {
  Dynamixel.turn(4, LEFT, 300);
  Dynamixel.turn(1, RIGHT, 300);
  Dynamixel.turn(2, LEFT, 300);
  Dynamixel.turn(3, RIGHT, 300);
  delay(5000);
  Dynamixel.turn(4, RIGHT, 0);
  Dynamixel.turn(1, LEFT, 0);
  Dynamixel.turn(2, RIGHT, 0);
  Dynamixel.turn(3, LEFT, 0);
  delay(5000);
}
