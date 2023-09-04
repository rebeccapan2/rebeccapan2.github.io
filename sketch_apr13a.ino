#include <AccelStepper.h>

#define STEP_PIN 3
#define DIR_PIN 2

#define redLED 9
#define greenLED 10
#define blueLED 11

#define PAUSE_BUTTON 6
#define LIMIT_SWITCH 8

const float FLOW_RATE_ML = 20.0;                    // (ml/min)

const float LEAD = 2.0;                             // (mm)
const float LEAD_SCREW_PITCH = 2.0;                 // (mm)

const float STEPS_PER_REV = 200.0;                  // 1.8° step angle (360° / 1.8°) (steps/rev)
const float STEPS_PER_MM = LEAD / STEPS_PER_REV;    // (2 mm per revolution) / (200 steps per revolution) (mm/steps)
const float SYRINGE_VOL = 20.0;                     // Volume of the syringe in ml (10 for 10ml, 20 for 20ml) (ml)
const float SYRINGE_DIA = 20.0;                     // Diameter of the syringe in mm (16.56 for 10ml, 20.89 for 20ml) (mm)

AccelStepper stepper(AccelStepper::DRIVER, STEP_PIN, DIR_PIN);

// convert flow rate from ml/min to ml/sec
float flowRate = FLOW_RATE_ML / 60.0;

// cross-sectional area of syringe (mm^2)
float area = M_PI * pow((SYRINGE_DIA / 2), 2);

// flow rate in mm/sec
float flowRateMmPerSec = (flowRate * 1000) / area;

// motor speed in steps per second
float speed = flowRateMmPerSec / STEPS_PER_MM;

// scaled speed to account for inaccuracy in conversion
float scaledSpeed = 1.08 * speed;

bool isRunning = false;
bool isPaused = true;
bool isOutOfLiquid = false;

float totalVolume = SYRINGE_VOL;


void setup() {
  // pin setup
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  pinMode(PAUSE_BUTTON, INPUT_PULLUP);
  pinMode(LIMIT_SWITCH, INPUT_PULLUP);
  stepper.setMaxSpeed(1000);
  stepper.setSpeed(-scaledSpeed);
}

void loop() {
  // pause button logic
  bool currentButtonState = digitalRead(PAUSE_BUTTON);
  if (currentButtonState == LOW) {
    isRunning = true;
    isPaused = false;
  } else if (currentButtonState == HIGH) {
    isRunning = false;
    isPaused = true;
  }

  // check if limit switch is pressed
  bool currentLimitState = digitalRead(LIMIT_SWITCH);
  if (currentLimitState == HIGH) {
    isOutOfLiquid = true;
    isRunning = false;
    isPaused = false;
  }

  // set LED color based on the condition
  setLEDColor();

  if (isRunning == true) {
    stepper.runSpeed();
  }
}

// function to set the LED color based on the state
void setLEDColor() {
  if (isRunning) {
    analogWrite(redLED, 0);
    analogWrite(greenLED, 255);
    analogWrite(blueLED, 0);
  } else if (isPaused) {
    analogWrite(redLED, 255);
    analogWrite(greenLED, 200);
    analogWrite(blueLED, 0);
  } else if (isOutOfLiquid) {
    analogWrite(redLED, 255);
    analogWrite(greenLED, 0);
    analogWrite(blueLED, 0);
  }
}
