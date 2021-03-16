/*
  Leitura analógica com exibição pela Serial

    -> Faz a leitura no pino analógico 0 
    -> Utilizar um potênciometro +5V

*/

void setup() {
  Serial.begin(9600);
}
void loop() {
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  delay(1);
}