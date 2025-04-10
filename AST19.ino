long randNumber1;
int potpin1 = A0;  // analog pin used to connect the potentiometer
int val1;          // variable to read the val1ue from the analog pin

int randNumberSpeed1;
int motorSpeed1 = 11; 
void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(11, OUTPUT);
  randomSeed(analogRead(0));
}
void loop() {
  val1 = analogRead(potpin1);  // reads the val1ue of the potentiometer (val1ue between 0 and 1023)
  val1 = map(val1, 0, 1023, 15, 1023);
  delay(val1);
  randNumber1 = random(1, 23);

  if (randNumber1 == 1) {
    digitalWrite(2, HIGH);
    digitalWrite(9, HIGH);
    randNumberSpeed1 = random(255);  // random number from 0-255
    analogWrite(motorSpeed1, randNumberSpeed1);
    delay(val1);

  } else if (randNumber1 == 2) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    randNumberSpeed1 = random(255);              // random number from 0-255
    analogWrite(motorSpeed1, randNumberSpeed1);  // outputs PWM
    delay(val1);
  } else if (randNumber1 == 3) {
    digitalWrite(2, HIGH);
    digitalWrite(9, HIGH);
    randNumberSpeed1 = random(255);  // random number from 0-255
    analogWrite(motorSpeed1, randNumberSpeed1);
    delay(val1);
  } else if (randNumber1 == 4) {
    digitalWrite(2, HIGH);
    digitalWrite(9, HIGH);
    randNumberSpeed1 = random(255);  // random number from 0-255
    analogWrite(motorSpeed1, randNumberSpeed1);
    delay(val1);
  } else if (randNumber1 == 5) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    randNumberSpeed1 = random(255);              // random number from 0-255
    analogWrite(motorSpeed1, randNumberSpeed1);  // outputs PWM
    delay(val1);
  } else if (randNumber1 == 6) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    randNumberSpeed1 = random(255);              // random number from 0-255
    analogWrite(motorSpeed1, randNumberSpeed1);  // outputs PWM
    delay(val1);
  } else if (randNumber1 == 7) {
    digitalWrite(2, HIGH);
    digitalWrite(9, HIGH);
    randNumberSpeed1 = random(255);  // random number from 0-255
    analogWrite(motorSpeed1, randNumberSpeed1);
    delay(val1);
  } else if (randNumber1 == 8) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    randNumberSpeed1 = random(255);  // random number from 0-255
    analogWrite(motorSpeed1, randNumberSpeed1);
    randNumberSpeed1 = random(255);              // random number from 0-255
    analogWrite(motorSpeed1, randNumberSpeed1);  // outputs PWM
    delay(val1);
  } else if (randNumber1 == 9) {
    digitalWrite(2, HIGH);
    digitalWrite(9, HIGH);
    randNumberSpeed1 = random(255);  // random number from 0-255
    analogWrite(motorSpeed1, randNumberSpeed1);
    delay(val1);
  } else if (randNumber1 == 10) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    randNumberSpeed1 = random(255);              // random number from 0-255
    analogWrite(motorSpeed1, randNumberSpeed1);  // outputs PWM
    delay(val1);
  } else if (randNumber1 == 11) {
    digitalWrite(2, HIGH);
    digitalWrite(9, HIGH);
    randNumberSpeed1 = random(255);  // random number from 0-255
    analogWrite(motorSpeed1, randNumberSpeed1);
    delay(val1);
  } else if (randNumber1 == 12) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    randNumberSpeed1 = random(255);              // random number from 0-255
    analogWrite(motorSpeed1, randNumberSpeed1);  // outputs PWM
    delay(val1);
  } else if (randNumber1 == 13) {
    digitalWrite(2, HIGH);
    digitalWrite(9, HIGH);
    randNumberSpeed1 = random(255);  // random number from 0-255
    analogWrite(motorSpeed1, randNumberSpeed1);
    delay(val1);
  } else if (randNumber1 == 14) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    randNumberSpeed1 = random(255);              // random number from 0-255
    analogWrite(motorSpeed1, randNumberSpeed1);  // outputs PWM
    delay(val1);
  } else if (randNumber1 == 15) {
    digitalWrite(2, HIGH);
    digitalWrite(9, HIGH);
    randNumberSpeed1 = random(255);  // random number from 0-255
    analogWrite(motorSpeed1, randNumberSpeed1);
    delay(val1);
  } else if (randNumber1 == 16) {
    digitalWrite(2, HIGH);
    digitalWrite(9, HIGH);
    randNumberSpeed1 = random(255);  // random number from 0-255
    analogWrite(motorSpeed1, randNumberSpeed1);
    delay(val1);
  } else if (randNumber1 == 17) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    randNumberSpeed1 = random(255);              // random number from 0-255
    analogWrite(motorSpeed1, randNumberSpeed1);  // outputs PWM
    delay(val1);
  } else if (randNumber1 == 18) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    randNumberSpeed1 = random(255);              // random number from 0-255
    analogWrite(motorSpeed1, randNumberSpeed1);  // outputs PWM
    delay(val1);
  } else if (randNumber1 == 19) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    randNumberSpeed1 = random(255);              // random number from 0-255
    analogWrite(motorSpeed1, randNumberSpeed1);  // outputs PWM
    delay(val1);
  } else if (randNumber1 == 20) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    randNumberSpeed1 = random(255);              // random number from 0-255
    analogWrite(motorSpeed1, randNumberSpeed1);  // outputs PWM
    delay(val1);
  } else if (randNumber1 == 21) {
    digitalWrite(2, HIGH);
    digitalWrite(9, HIGH);
    randNumberSpeed1 = random(255);              // random number from 0-255
    analogWrite(motorSpeed1, randNumberSpeed1);  // outputs PWM
    delay(val1);
  } else if (randNumber1 == 22) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    randNumberSpeed1 = random(255);              // random number from 0-255
    analogWrite(motorSpeed1, randNumberSpeed1);  // outputs PWM
    delay(val1);
  } else if (randNumber1 == 23) {
    digitalWrite(2, HIGH);
    digitalWrite(9, HIGH);
    randNumberSpeed1 = random(255);              // random number from 0-255
    analogWrite(motorSpeed1, randNumberSpeed1);  // outputs PWM
    delay(val1);
  }
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(9, LOW);
  analogWrite(11, LOW);
  delay(val1);
}
