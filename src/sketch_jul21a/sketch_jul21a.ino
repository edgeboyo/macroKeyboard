#include <Keyboard.h>


void setup() {
  // put your setup code here, to run once:
  Keyboard.begin();
  pinMode(8, OUTPUT);
  pinMode(12, INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:I love you
  digitalWrite(8, HIGH);
  if(digitalRead(12) == HIGH){
    Serial.write("H");
    //Keyboard.print("H");
    delay(200);
  }
  else {
    Serial.write("L");
    delay(200);
  }
  digitalWrite(8, LOW);
}
