taskkill /F /IM taskmgr.exe
Add-Type -AssemblyName System.speech
$speak = New-Object System.Speech.Synthesis.SpeechSynthesizer
$speak.Speak("WARNING! WARNING! WARNING!");
exit
