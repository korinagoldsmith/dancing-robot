#include <Servo.h> 
Servo rightFoot;
Servo rightThigh;
Servo leftFoot;
Servo leftThigh; 
int pos = 0;
void setup() {
  leftThigh.attach(9);
  leftFoot.attach(10);
  rightThigh.attach(11);
  rightFoot.attach(12);

  leftThigh.write(180);
  rightThigh.write(0);
  rightFoot.write(180);
  leftFoot.write(90);
  delay(500);
}

void loop() {
  mosh();
  goBack();
  happyFeet();
  goBack();
  shuffle();
  goBack();
}

void goBack(){
  leftThigh.write(180);
  rightThigh.write(0);
  rightFoot.write(180);
  leftFoot.write(90);
  delay(500);
}

void happyFeet(){
  leftFoot.write(165);
  delay(10);
  rightThigh.write(90);
  delay(10);
  rightFoot.write(150);
  delay(10);
  rightFoot.write(50);
  delay(200);
  rightFoot.write(180);
  delay(10);
  rightThigh.write(0);
  delay(10);
  rightThigh.write(20);
  delay(10);
  leftFoot.write(90);
  delay(10);
  rightFoot.write(180);
  delay(10);
  rightThigh.write(90);
  delay(10);
  leftThigh.write(0);
  delay(10);
  leftFoot.write(165);
  delay(10);
  leftFoot.write(110);
  delay(10);
  rightFoot.write(160);
  delay(10);
  leftThigh.write(180);
  delay(10);
  rightThigh.write(0);
  delay(10);
  rightFoot.write(180);
  delay(10);
  leftFoot.write(90);
  delay(500);
}

void mosh(){
  leftFoot.write(165);
  delay(10);
  rightThigh.write(90);
  delay(10);
  rightFoot.write(150);
  delay(10);
  rightFoot.write(50);
  delay(200);
  rightFoot.write(180);
  delay(10);
  leftFoot.write(100);
  delay(10);
  leftThigh.write(130);
  delay(10);
  leftThigh.write(120); 
  delay(10);
  rightThigh.write(0);
  delay(10);
  leftThigh.write(40);
  delay(10);
  rightThigh.write(90);
  delay(10);
  leftThigh.write(90);
  delay(10);
  rightThigh.write(90);
  delay(10);
  leftThigh.write(180);
  delay(10);
  rightThigh.write(180);
  delay(10);
  rightThigh.write(90);
  delay(10);
  leftThigh.write(0);
  delay(10);
  leftThigh.write(90);
  delay(10);
  leftThigh.write(180);
  delay(10);
  rightThigh.write(0);
  delay(10);
  rightFoot.write(180);
  delay(10);
  leftFoot.write(90);
}

void shuffle(){
  leftThigh.write(90);
  delay(100);
  rightThigh.write(90);
  delay(100);
  leftThigh.write(180);
  delay(100);
  rightThigh.write(0);
  delay(100);
  leftFoot.write(180);
}
