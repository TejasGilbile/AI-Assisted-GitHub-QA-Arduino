// Two LED Blink - Simple Arduino Project
// This project demonstrates basic LED control using Arduino pins

// we will use 10th and 11th pin okay !!

const int led1 = 10; //led1 active on 10th pin
const int led2 = 11; // led2 active on 11th pin

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  // first turning LED1 on
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
  delay(500); // a small delay

  // now turning LED2 on
  digitalWrite(led1,LOW);
  digitalWrite(led2, HIGH);
  delay(500);
}
