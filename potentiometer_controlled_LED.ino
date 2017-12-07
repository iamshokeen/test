int LED = 9;
int POTENTIOMETER = A0;
int inputValue;
int outputValue;
void setup() {
Serial.begin(115200);
pinMode(LED,OUTPUT);
pinMode(POTENTIOMETER,INPUT);


}

void loop() {
  inputValue = analogRead(POTENTIOMETER);
  outputValue = (255/1023)*inputValue;
  analogWrite(LED,outputValue);
}
