#include <HijelHID_BLEKeyboard.h>

// Create Bluetooth keyboard
HijelHID_BLEKeyboard keyboard(
  "MDV PowerPoint Remote",
  "MDV",
  100
);

// Push button pins
#define BUTTON_F5      25
#define BUTTON_ESC     26
#define BUTTON_PREV    27
#define BUTTON_NEXT    33

void setup() {

  Serial.begin(115200);

  // Buttons use internal pull-up resistors
  pinMode(BUTTON_F5, INPUT_PULLUP);
  pinMode(BUTTON_ESC, INPUT_PULLUP);
  pinMode(BUTTON_PREV, INPUT_PULLUP);
  pinMode(BUTTON_NEXT, INPUT_PULLUP);

  // Bluetooth keyboard
  keyboard.setLogLevel(HIDLogLevel::Normal);
  keyboard.begin();

  Serial.println("MDV PowerPoint Remote Started");
  Serial.println("Waiting for Bluetooth connection...");
}

void loop() {

  // Only send keys when laptop is paired
  if (!keyboard.isPaired()) {
    delay(100);
    return;
  }

  // F5 - Start slideshow
  if (digitalRead(BUTTON_F5) == LOW) {
    keyboard.tap(KEY_F5);
    Serial.println("F5 - Start Slideshow");
    delay(400);
  }

  // ESC - Exit slideshow
  if (digitalRead(BUTTON_ESC) == LOW) {
    keyboard.tap(KEY_ESCAPE);
    Serial.println("ESC - Exit Slideshow");
    delay(400);
  }

  // LEFT - Previous slide
  if (digitalRead(BUTTON_PREV) == LOW) {
    keyboard.tap(KEY_LEFT);
    Serial.println("LEFT - Previous Slide");
    delay(300);
  }

  // RIGHT - Next slide
  if (digitalRead(BUTTON_NEXT) == LOW) {
    keyboard.tap(KEY_RIGHT);
    Serial.println("RIGHT - Next Slide");
    delay(300);
  }
}