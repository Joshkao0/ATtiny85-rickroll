#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);

  // Win + R
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);

  // https
  DigiKeyboard.print("https");

  // :  = Shift + .
  DigiKeyboard.sendKeyStroke(55, MOD_SHIFT_LEFT);

  // // = Shift + 7
  DigiKeyboard.sendKeyStroke(36, MOD_SHIFT_LEFT);
  DigiKeyboard.sendKeyStroke(36, MOD_SHIFT_LEFT);

  // "youtu.be"
  // Auf deutschem Layout muss der US-Y-Key als Z gesendet werden,
  // damit Windows daraus Y macht.
  DigiKeyboard.print("zoutu.be");

  // /
  DigiKeyboard.sendKeyStroke(36, MOD_SHIFT_LEFT);

  // Video-ID
  DigiKeyboard.print("dQw4w9WgXcQ");

  DigiKeyboard.delay(500);

  // Enter
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.delay(5000);
}

void loop() {
}