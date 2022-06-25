/*
      NITRO Clubs EU - Network of IcT Robo Clubs
 
 WEB site: https://www.nitroclubs.eu 
 GitHub repositories: https://github.com/nitroclubs?tab=repositories 
 
          NITRObot Setservo to central position (90°) v1.0
*/

///////////////////       IMPORTANT!    ///////////////////////////////////////////// 
/// In order to prolong the Life of the 18650 Battery:
/// DO NOT DISCHAREGE NITRObot's BATTERIES LOWER THAN 3.2V, WHICH IS 6.4V MESURED BY THE NITRObot's VOLTMETER (2x3.2V)
/// NEVER!!! NEVER DISCHARGE A BATTERY BELOW 2.8V, WHICH IS 5.6V (2x2.8v) MEASURED BY THE NITRObot's VOLTMETER  
///////////////////       IMPORTANT!    ///////////////////////////////////////////// 


#include <Servo.h>
//====== DEFINE ======
#define MOTOR_LEFT_FWD_PIN 9    // PWMB
#define MOTOR_LEFT_BKWD_PIN 5   // DIRB  ---  Left
#define MOTOR_RIGHT_FWD_PIN 6   // PWMA
#define MOTOR_RIGHT_BKWD_PIN 10 // DIRA  ---  Right

//====== CONSTANTS ======
const int UltrasonicPin = 3;
const int ServoPin = 13;
const int LeftAvoidancePin = 12;
const int RightAvoidancePin = A5;
const int LeftLightPin = A3;
const int RightLightPin = A4;

//====== Instantiate (create) an instance of the Servo object (class), named servo
Servo servo;
// twelve servo objects can be created on most boards

void setup() {
  servo.attach(ServoPin);
  servo.write(90); // Move the servo to center position}
}

void loop() {

}
