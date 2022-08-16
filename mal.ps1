sleep 3
taskkill /F /IM taskmgr.exe
Add-Type -AssemblyName System.speech
$speak = New-Object System.Speech.Synthesis.SpeechSynthesizer
$speak.Speak("Well Welcome to Hell, ha ha ha ha ohh.");
exit
