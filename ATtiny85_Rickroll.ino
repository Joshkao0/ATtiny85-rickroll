#include "DigiKeyboardDe.h"

void setup() {
  DigiKeyboardDe.sendKeyStroke(0);
  DigiKeyboardDe.delay(1000);

  // Win + R
  DigiKeyboardDe.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardDe.delay(500);

  // YouTube öffnen
  DigiKeyboardDe.print("cmd.exe /c start https://www.youtube.com/watch?v=dQw4w9WgXcQ");
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);

  // Browser laden lassen
  DigiKeyboardDe.delay(4000);

  // F11 = Vollbild
  DigiKeyboardDe.sendKeyStroke(KEY_F11);
}

void loop() {
}
