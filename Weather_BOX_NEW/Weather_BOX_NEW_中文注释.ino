#include <dht.h>
#include <LiquidCrystal.h>

//led blink tutorial!
//Get more tutorials on --> --> -->
//"MIYMAKERS" https://miymakers.wordpress.com/

#define dht_dpin A5 //���ﲻ��Ҫ����;������Ϊ��β���˴������趨�����������ݽ�Ӧ������һ���ӿ���
dht DHT;


LiquidCrystal lcd(12, 11, 5, 4, 3, 2); //�˴������趨LCD�ĸ������ݽ�Ӧ������һ���ӿ���
void setup(){
 
  ;lcd.begin(16, 2); //LCD��ʾ������(<����>, <����>);
  lcd.print("TEMP   HUMIDITY"); //����д������Ļ����ʾ����
  Serial.begin(57600); 
}
void loop(){
  lcd.setCursor(0,3);
  DHT.read11(dht_dpin);
  


  //lcd.print(abs(moisture)); 
  //Serial.println(moisture);
  lcd.print(round(DHT.temperature));
  lcd.print((char)223); //����˶Է��� �� ����ʾ֧��
  lcd.print("C   "); 
  lcd.print(round(DHT.humidity));
  lcd.print("%   "); 
}