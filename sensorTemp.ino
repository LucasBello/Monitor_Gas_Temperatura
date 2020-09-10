#include <Wire.h>
#include <Servo.h>
 
int val1=6;
int val2=7;
int val3=8;
int val4=9;
int tempNorte = 3;
int tempSul = 2;
int tempLeste = 1;
int tempOeste = 0;
Servo servoNorte;
Servo servoSul;
Servo servoLeste;
Servo servoOeste;

void setup(){
  Serial.begin(9600); 
}

void loop(){
//--INICIO LEITURA NORTE--//
int leituraNorte = analogRead(tempNorte);
float voltagemNorte = leituraNorte * 5.0;
voltagemNorte /= 1024.0;

//Conversão Volts para Graus Norte  
float grausNorte = (voltagemNorte -0.5) * 100 ;

//Log temperatura Norte
Serial.print(grausNorte); Serial.println(" graus C (NORTE)");

//Alarme temperatura Norte 100ºC
if(grausNorte>100)
{
  servoNorte.attach(2);
  digitalWrite(val4, HIGH);

//Iniciar resfriamento do Silo
    for(int anguloNorte=0; anguloNorte<=180; anguloNorte++)
    {
        servoNorte.write(anguloNorte);
        delay(10);
    }
    
        for(int anguloNorte=180; anguloNorte>=0; anguloNorte--)
    {
    servoNorte.write(anguloNorte);
    delay(10);
    }
    }

//--FIM LEITURA NORTE--//

//--INICIO LEITURA SUL--//
int leituraSul = analogRead(tempSul);
float voltagemSul = leituraSul * 5.0;
voltagemSul /= 1024.0;

//Conversão Volts para Graus Sul  
float grausSul = (voltagemSul -0.5) * 100 ;

//Log temperatura Sul
Serial.print(grausSul); Serial.println(" graus C (SUL)");

//Alarme temperatura Sul 100ºC
if(grausSul>100)
{
    digitalWrite(val3, HIGH);
    servoSul.attach(3);

//Iniciar resfriamento do Silo
    for(int anguloSul=0; anguloSul<=180; anguloSul++)
    {
        servoSul.write(anguloSul);
        delay(10);
    }
    for(int anguloSul=180; anguloSul>=0; anguloSul--)
    {
        servoSul.write(anguloSul);
        delay(10);
    }
}
//--FIM LEITURA SUL--//

//--INICIO LEITURA LESTE--//
int leituraLeste = analogRead(tempLeste);
float voltagemLeste = leituraLeste * 5.0;
voltagemLeste /= 1024.0;

//Conversão Volts para Graus Leste  
float grausLeste = (voltagemLeste -0.5) * 100 ;

//Log temperatura Leste
Serial.print(grausLeste); Serial.println(" graus C (LESTE)");

//Alarme temperatura Leste 100ºC
if(grausLeste>100)
{
    digitalWrite(val2, HIGH);
    servoLeste.attach(4);

//Iniciar resfriamento do Silo
    for(int anguloLeste=0; anguloLeste<=180; anguloLeste++)
    {
      servoLeste.write(anguloLeste);
      delay(10);
    }
    
    for(int anguloLeste=180; anguloLeste>=0; anguloLeste--)
    {
      servoLeste.write(anguloLeste);
      delay(10);
    }
}

//--FIM LEITURA LESTE--//

//--INICIO LEITURA OESTE--//
int leituraOeste = analogRead(tempOeste);
float voltagemOeste = leituraOeste * 5.0;
voltagemOeste /= 1024.0;

//Conversão Volts para Graus Oeste  
float grausOeste = (voltagemOeste -0.5) * 100 ;

//Log temperatura Oeste
Serial.print(grausOeste); Serial.println(" graus C (OESTE)");

//Alarme temperatura Oeste 100ºC
if(grausOeste>100)
{
    digitalWrite(val1, HIGH);
    servoLeste.attach(5);

//Iniciar resfriamento do Silo
    for(int anguloOeste=0; anguloOeste<=180; anguloOeste++)
    {
      servoOeste.write(anguloOeste);
      delay(10);
    }
    
    for(int anguloOeste=180; anguloOeste>=0; anguloOeste--)
    {
      servoOeste.write(anguloOeste);
      delay(10);
    }
}

//--FIM LEITURA OESTE--//
}