## Jumper Bootloader
![Screenshot](IMG_20220928_073222.png)

#### DigiSpark ATtiny85 use an inbuilt bootloader that runs prior to the users scripts, this will cause a 5 second wait time before the device can do anything else !    
> Obviously this isn't practical if we want a payload delivered as fast as possible in the victim machine !
  


### Jumper Bootloader  
> You can upload a custom bootloader to the DigiSpark that completely disables the bootloader until Pin 0 is attached to Ground, a Jumper wire must be placed on the device when Uploading a new program - then you can remove the Jumper wire when you're ready to execute the attack, this way you can remove the entire bootloader waiting time on an attack.
    
### Installation,
   
- Open Microneucleus directory in Arduino    
- Copy Jumper.hex file to micronucleus root folder
- Start a Command Window   
- Run Firmware Update Command    
```
micronucleus.exe --run jumper.hex 
```     
   
• Now when you Upload in Arduino IDE, make sure you connect a jumper wire to ground and then pin 0, pin 0 is now the programmer pin.
