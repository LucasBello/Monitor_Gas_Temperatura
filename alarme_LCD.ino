#include <Wire.h>
#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int buzzer = 10;

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
  pinMode(buzzer, OUTPUT);
}

void loop() {            
 
  if (digitalRead(val1)== HIGH){
        
  lcd.setCursor(3,0);
  lcd.print("AQUECIMENTO");
  lcd.setCursor(4, 1);
  lcd.print("NORTE");
 
  tone(10, 300); 
  delay(1000);
  noTone(10);
  delay(100);
  tone(10, 150);
  delay(1000);
  noTone(10);
  delay(100);
  }
  
 
  if (digitalRead(val2) == HIGH){          
    
  lcd.setCursor(3,0);
  lcd.print("AQUECIMENTO");        
  lcd.setCursor(5, 1);
  lcd.print("SUL ");
    
   tone(10, 300); 
   delay(1000);
   noTone(10);
   delay(100);
   tone(10, 150);
   delay(1000);
   noTone(10);
   delay(100);
     }
  
    if (digitalRead(val3) == HIGH){

  lcd.setCursor(3,0);
  lcd.print("AQUECIMENTO");
  lcd.setCursor(4, 1);
  lcd.print("LESTE");
  tone(10, 300); 
  delay(1000);
  noTone(10);                      
  delay(100);
  tone(10, 150);
  delay(1000);
  noTone(10);
  delay(100);    
}
    if (digitalRead(val4) == HIGH){
  lcd.setCursor(3,0);
  lcd.print("AQUECIMENTO");
  lcd.setCursor(4, 1);
  lcd.print("OESTE");
       
  tone(10, 300); 
  delay(1000);
  noTone(10);
  delay(100);
  tone(10, 150);
  delay(1000);
  noTone(10);
  delay(100);
  }     
}  