sleep 3
taskkill /F /IM taskmgr.exe
Add-Type -AssemblyName System.speech
$speak = New-Object System.Speech.Synthesis.SpeechSynthesizer
$speak.Speak("Well Welcome to Hell");
start https://www.youtube.com/watch?v=dQw4w9WgXcQ
exit
