// Locate the initial position of legs 
// Modified for PCA9685 usage

#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

// Servo configuration
// Pulse width in ticks (0.544 ms to 2.4 ms at 50Hz = 111 to 491)
#define SERVO_MIN 111
#define SERVO_MAX 491


// Map servo to PCA9685 channels: 4 legs × 3 joints = 12 servos
//coxa femur Tibia 
const int servo_channel[4][3] = {
  {0, 1, 2} ,// leg 1 font right
   {3, 4, 5},// leg 2 rear right
    {6, 13, 8},// leg 3 front left
     {12, 10, 11} // leg 4 raer left
};

// Converts angle (0-180) to PWM pulse length for PCA9685
uint16_t angleToPulse(int angle) {
  return map(angle, 0, 180, SERVO_MIN, SERVO_MAX);  // map angle to PWM ticks
}


void setup() {
  Serial.begin(115200);
  pwm.begin();
  pwm.setPWMFreq(50);  // Analog servos run at ~50 Hz
  delay(10);

  // Move all servos to initial position (90 degrees)
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 3; j++) {
      pwm.setPWM(servo_channel[i][j], 0, angleToPulse(90));
      Serial.println("SETUP");
      delay(20);
    }
  }

}

void loop() {
  // Re-center servos in loop (not usually necessary unless testing)
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 3; j++) {
      pwm.setPWM(servo_channel[i][j], 0, angleToPulse(90));
      delay(20);
    }
  }

  delay(1000); // Pause to avoid spamming
}
