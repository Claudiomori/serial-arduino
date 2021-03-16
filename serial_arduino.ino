const int LED = 13; //DEFINIÇÃO CONSTANTE DA VARIÁVEL
 
void setup() {
  Serial.begin(9600);    // INICIA A SERIAL COM A TAXA
  pinMode(LED,OUTPUT);   // PINO LED COMO SAÍDA
}
 
void loop() {
   if (Serial.available()) //AVALIA O INICIO DA COMUNICAÇÃO SERIAL
   {
    
    switch(Serial.read())      //VERIFICAÇÃO DO CARACTER
    {
      case 'A':                  //caso 'A'

        digitalWrite(LED,!digitalRead(LED)); // INVERTE O STATUS DO LED

      break;
    }
  }
}