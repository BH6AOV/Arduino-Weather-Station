#include <dht.h>
#include <LiquidCrystal.h>

//led blink tutorial!
//Get more tutorials on --> --> -->
//"MIYMAKERS" https://miymakers.wordpress.com/

#define dht_dpin A5 //no ; here. Set equal to channel sensor is on
dht DHT;


LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup(){
 
  ;lcd.begin(16, 2);
  lcd.print("TEMP   HUMIDITY");
  Serial.begin(57600); 
}
void loop(){
  lcd.setCursor(0,3);
  DHT.read11(dht_dpin);
  


  //lcd.print(abs(moisture)); 
  //Serial.println(moisture);
  lcd.print(round(DHT.temperature));
  lcd.print((char)223); //add degree symbol print support
  lcd.print("C   "); 
  lcd.print(round(DHT.humidity));
  lcd.print("%   "); 
}