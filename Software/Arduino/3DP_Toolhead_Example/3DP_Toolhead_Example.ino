#include <Wire.h>
//https://www.electrosoftcloud.com/en/arduino-master-master-i2c-bidirectional-comunication/
/* Type indicies the type of the Toolhead
 *  Examples:
 *  "normal"  Standart Extdruder
 *  "Bowden"  PLA/ABS/.. Bowden Extruder
 *  "Direct"  PLA/ABS/.. Direct Extdruder
 *  
 *  
 */
const char* Type = "NameofHead"; //change 

void setup() {
  Wire.begin(5);//Adress of Toolhead
  Wire.onReceive(receiveEvent);
}

void loop() {
  // put your main code here, to run repeatedly:
   delay(100);
  
}
/* Key Documentation
 *  
 *  1 return toolhead "Type"
 * 
 */
void receiveEvent(int key){
  while(1 < Wire.available())
  {
    char ckey = Wire.read();
    Serial.print(key);

    int key = Wire.read();

    switch (key){
      case 1:
        Wire.write(Type);
        break;
      default:
        Wire.write("key missmatch");
        break;
  }
  
  }
}
