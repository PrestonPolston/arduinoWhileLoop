int redPin = 9;
int greenPin = 10;
int bluePin = 11;
int count;
int inputCount;
int br = 115200;
int shortPause = 2500;
String Prompt = "how many times do you want it to flash? ";


void setup() {
Serial.begin(br);
pinMode(redPin, OUTPUT);
pinMode(greenPin, OUTPUT);
pinMode(bluePin, OUTPUT);
}

void loop() {
Serial.println(Prompt);
while(Serial.available()== 0){}
inputCount = Serial.parseInt();
count = 0;
while(count <= inputCount){
  analogWrite(redPin, 255);
  delay(shortPause);
  analogWrite(redPin, 0);
  count = count+1;
  Serial.println(count);
}

}
