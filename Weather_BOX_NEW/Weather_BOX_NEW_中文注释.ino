#include <dht.h>
#include <LiquidCrystal.h>

//led blink tutorial!
//Get more tutorials on --> --> -->
//"MIYMAKERS" https://miymakers.wordpress.com/

#define dht_dpin A5 //这里不需要加入;符号作为结尾，此处用于设定传感器的数据脚应接在哪一个接口上
dht DHT;


LiquidCrystal lcd(12, 11, 5, 4, 3, 2); //此处用于设定LCD的各个数据脚应接在哪一个接口上
void setup(){
 
  ;lcd.begin(16, 2); //LCD显示屏阵列(<列数>, <行数>);
  lcd.print("TEMP   HUMIDITY"); //这里写的是屏幕上显示的字
  Serial.begin(57600); 
}
void loop(){
  lcd.setCursor(0,3);
  DHT.read11(dht_dpin);
  


  //lcd.print(abs(moisture)); 
  //Serial.println(moisture);
  lcd.print(round(DHT.temperature));
  lcd.print((char)223); //添加了对符号 度 的显示支持
  lcd.print("C   "); 
  lcd.print(round(DHT.humidity));
  lcd.print("%   "); 
}