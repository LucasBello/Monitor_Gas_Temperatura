#include <Wire.h>
#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int val1=6;
int val2=7;
int val3=8;
int val4=9;

void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(5,0);
  lcd.print("SISTEMA");
  lcd.setCursor(7,1);
  lcd.print("OK");
}

void loop() {            
 
  if (digitalRead(val1)== HIGH){  
  lcd.setCursor(2,0);
  lcd.print("NIVEL NORMAL");
  lcd.setCursor(1, 1);
  lcd.print("DIOX DE NITROG");
}
  
if (digitalRead(val2) == HIGH){
	lcd.setCursor(2,0);
	lcd.print("NIVEL ELEVADO");        
	lcd.setCursor(5, 1);
	lcd.print("DIOX DE NITROG");
}
  
if (digitalRead(val3) == HIGH){
	lcd.setCursor(1,0);
	lcd.print("NIVEL ALARMANTE");
	lcd.setCursor(4, 1);
	lcd.print("DIOX DE NITROG");
}
  
if (digitalRead(val4) == HIGH){
	lcd.setCursor(2,0);
	lcd.print("NIVEL ALERTA");
	lcd.setCursor(4, 1);
	lcd.print("DIOX DE NITROG");
  }     
}