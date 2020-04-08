#include <Servo.h>

Servo myservo;
int a;

void setup() {
 
  Serial.begin(9600);
  pinMode(A0, INPUT);
  digitalWrite(A0, LOW);
  myservo.attach(9);
  myservo.write(0);
}

void loop() {
 
  a =  analogRead(A0);
  Serial.println(a);
  if(a > 8){
    myservo.write(40);
    delay(3); 
  }
  else{
    myservo.write(0);
  }
  

}
