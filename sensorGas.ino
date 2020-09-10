int const sensorGas = A1;
int val1=10;
int val2=11;
int val3=12;
int val4=13;
int ledVerde = 7;
int ledAmarelo = 6;
int ledLaranja = 5;
int ledVermelho = 4;

void setup(){
  	pinMode(ledVerde, OUTPUT);
    pinMode(ledAmarelo, OUTPUT);
    pinMode(ledLaranja, OUTPUT);
    pinMode(ledVermelho, OUTPUT);
    Serial.begin(9600);
}

void loop(){
//Leitura da entrada do sensor
	int valor = analogRead(sensorGas);
//Conversão da variável para porcentagem
	valor = map(valor, 300, 750, 0, 100);
//Print do valor
	Serial.println(valor); 
//Leitura OK
	digitalWrite(ledVerde, HIGH); 
	if (valor < 30)
    {digitalWrite(val1, HIGH);
    }
//Leitura Atenção
digitalWrite(ledAmarelo, valor >= 30 ? HIGH : LOW);
	if (valor >= 30 && valor <= 49)
    {digitalWrite(val2, HIGH);
    }  
//Leitura Alerta
  digitalWrite(ledLaranja, valor >= 50 ? HIGH : LOW);
	if (valor >= 50 && valor <= 79)
    {digitalWrite(val3, HIGH);
    }
//Leitura Alerta Vermelho
  digitalWrite(ledVermelho, valor >= 80 ? HIGH : LOW);
  	if (valor >= 80)
    {digitalWrite(val4, HIGH);
    }  
  delay(250);
}