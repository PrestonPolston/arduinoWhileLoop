int redPin = 9;
int greenPin = 10;
int bluePin = 11;
int count;
int inputCount;
int br = 115200;
int shortPause = 250;
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
count = 1;
while(count <= inputCount){
  // red flash
  analogWrite(redPin, 255);
  delay(shortPause); 
  analogWrite(redPin, 0);
  delay(shortPause);
  //  green flash
  analogWrite(greenPin, 255);
  delay(shortPause); 
  analogWrite(greenPin, 0);
  delay(shortPause);
  // blue flash
  analogWrite(bluePin, 255);
  delay(shortPause); 
  analogWrite(bluePin, 0);
  delay(shortPause);
  count = count+1;
  // Serial.println(count);
}

}
