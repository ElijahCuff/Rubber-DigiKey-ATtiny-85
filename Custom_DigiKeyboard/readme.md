## Customized DigiKeyboard.h 
##### To be placed under `%userdata%\AppData\Local\Arduino15\packages\digistump\hardware\avr\1.6.7\libraries\DigisparkKeyboard`
   
### What's Different ?    
• DigiKeyboard is declared as Keyboard for quicker scripting.    
• Tab, Delete, Arrow Keys Added.    
• MOD_CONTROL is now MOD_CTRL
   
### Notes,    
- The DigiSpark has minimal memory, and therefore the best way to fit a payload is by retrieving it from the internet during the attack, this requires the victim pc to have internet access for powershell.    
- This implementation shows a classic Task Manager UAC Bypass to gain administrator privileges in powershell.    
- More keys can be added, for reference I'm adding chapter 10 of the USB HID Usage Tables, for easy addition of keys you need.
   
### Adding Keys,   
> Simply define a new key name and value in hex or decimal value,      
- Open in something like NotePad++ for Unix line ending Support ( \n ).       
- Then add a key definition to the file, example - `#define KEY_NAME_ME       23`        
>  Here 23 is used, this is the decimal value for the Letter "T" according to the HID Usage Tables ( USB Keyboard Specs ) this could also be written as the hex value, `#define KEY_T       0x17`
  


#### Installation is straight forward,     
- Open File Explorer ( My PC, PC ).    
- Navigate to `%userdata%\AppData\Local\Arduino15\packages\digistump\hardware\avr\1.6.7\libraries\DigisparkKeyboard`       
- Paste the Custom Keyboard File into position, replacing the stock one.
  
  
 
