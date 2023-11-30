#include <Servo.h>

// Create servo objects.
Servo servoA; // Base Servo: Rotate entire arm left and right.
Servo servoB; // Arm Servo: Moves arm up and down.
Servo servoC; // Arm Servo: Twist arm left and right.
Servo servoD; // Claw Servo: Open and closes the claw.

//initial position
int angleA1 = 
int angleB1 =
int angleC1 =
int angleD1 =
  
//final position
int angleA2 = 
int angleB2 =
int angleC2 =
int angleD2 =

  
void resetArm()
{
  // Arm resting position.
  servoA.write(0);
  servoB.write(0);
  servoC.write(0);
  servoD.write(90);
}

void grabItem()
{
  //picking the object
  servoD.write(180);
  delay(1000);
  servoA.write(angleA);
  delay(1000);
  servoC.write(angleC);
  delay(1000);
  servoD.write(110);
  delay(1000);
}

void dropItem()
{
  //placing the object
  servoB.write(180);
  delay(1000);
  servoD.write(180);
  delay(1000);
}


void setup() {

  // Servos attached to corresponding PWM pins.
  servoA.attach(9);
  servoB.attach(6);
  servoC.attach(5);
  servoD.attach(3);
  
  //start with beging position.
  resetArm();
}

void loop() {


  grabItem(); // Grabs item.

  delay(1000);
  dropItem(); // Drops item to left of arm.
  delay(1000);
  //resetArm(); // Brings arm back to resting position.
  

}
