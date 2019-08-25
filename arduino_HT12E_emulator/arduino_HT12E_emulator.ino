/**
 Arduino sketch emulating operation of HT12E encoder.
 Used to send signal via an HFY-FST transmitter module to a HT12D decoder.
 This encoder is used to open a garage door.
 It sends 13 bits (repeated 10 times): 8 bits as a preamble and 5 as a door code.
**/

int dataPin = 10;
void setup() {
  pinMode(dataPin, OUTPUT);
  digitalWrite(dataPin, LOW);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  for (int i = 0; i < 10; i++) {
    preamble();
    // example 5 digit code
    zero();
    one();
    one();
    zero();
    one();
  }
  digitalWrite(LED_BUILTIN, LOW);
  delay(2000);
}

void one ()
{
  digitalWrite(dataPin, HIGH);
  delayMicroseconds(600);
  digitalWrite(dataPin, LOW);
  delayMicroseconds(300);

}
void zero () {
  digitalWrite(dataPin, LOW);
  delayMicroseconds(300);
  digitalWrite(dataPin, HIGH);
  delayMicroseconds(300);
  digitalWrite(dataPin, LOW);
  delayMicroseconds(300);

}

void preamble() {
  delayMicroseconds(60000);
  for (int j = 0; j < 8; j++) {
    zero();
  }
}
