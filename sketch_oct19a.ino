int ledA = 3;
    int ledB = 4;
    int ledC = 10;
    int ledD = 11;
    int btnL = 7;
    int btnR = 8;
    
void setup() {

    pinMode(ledA, OUTPUT);
    pinMode(ledB, OUTPUT);
    pinMode(ledC, OUTPUT);
    pinMode(ledD, OUTPUT);
    pinMode(btnL, INPUT);
    pinMode(btnR, INPUT);
  Serial.begin(9600);

}

void loop() {
   Serial.println(digitalRead(btnL));
  if(digitalRead(btnL) == HIGH) {
     
}
     
  if (digitalRead(btnR) == HIGH) {
    // HEPSİ KAPALI
    digitalWrite(ledA, LOW);
    digitalWrite(ledB, LOW);
    digitalWrite(ledC, LOW);
    digitalWrite(ledD, LOW);
    delay(500);
    //SONDAKİ LED AÇIK
    digitalWrite(ledA, LOW);
    digitalWrite(ledB, LOW);
    digitalWrite(ledC, LOW);
    digitalWrite(ledD, HIGH);
    delay(500);
    //3. LED AÇIK
    digitalWrite(ledA, LOW);
    digitalWrite(ledB, LOW);
    digitalWrite(ledC, HIGH);
    digitalWrite(ledD, LOW);
    delay(500);
    //3. VE SONUNCU LED AÇIK
    digitalWrite(ledA, LOW);
    digitalWrite(ledB, LOW);
    digitalWrite(ledC, HIGH);
    digitalWrite(ledD, HIGH);
    delay(500);
    //2. LED AÇIK
    digitalWrite(ledA, LOW);
    digitalWrite(ledB, HIGH);
    digitalWrite(ledC, LOW);
    digitalWrite(ledD, LOW);
    delay(500);
    //2. VE SONUNCU AÇIK
    digitalWrite(ledA, LOW);
    digitalWrite(ledB, HIGH);
    digitalWrite(ledC, LOW);
    digitalWrite(ledD, HIGH);
    delay(500);
    //2. VE 3. LED AÇIK
    digitalWrite(ledA, LOW);
    digitalWrite(ledB, HIGH);
    digitalWrite(ledC, HIGH);
    digitalWrite(ledD, LOW);
    delay(500);
    //2.,3. VE SON LED AÇIK
    digitalWrite(ledA, LOW);
    digitalWrite(ledB, HIGH);
    digitalWrite(ledC, HIGH);
    digitalWrite(ledD, HIGH);
    delay(500);
    //İLK LED AÇIK
    digitalWrite(ledA, HIGH);
    digitalWrite(ledB, LOW);
    digitalWrite(ledC, LOW);
    digitalWrite(ledD, LOW);
    delay(500);
    //İLK VE SON LED AÇIK
    digitalWrite(ledA, HIGH);
    digitalWrite(ledB, LOW);
    digitalWrite(ledC, LOW);
    digitalWrite(ledD, HIGH);
    delay(500);
    //İLK VE 3. LED AÇIK
    digitalWrite(ledA, HIGH);
    digitalWrite(ledB, LOW);
    digitalWrite(ledC, HIGH);
    digitalWrite(ledD, LOW);
    delay(500);
    //İLK 3. VE SON LED AÇIK
    digitalWrite(ledA, HIGH);
    digitalWrite(ledB, LOW);
    digitalWrite(ledC, HIGH);
    digitalWrite(ledD, HIGH);
    delay(500);
    //İLK VE 2. LED AÇIK
    digitalWrite(ledA, HIGH);
    digitalWrite(ledB, HIGH);
    digitalWrite(ledC, LOW);
    digitalWrite(ledD, LOW);
    delay(500);
    //İLK 2. VE SON LED AÇIK
    digitalWrite(ledA, HIGH);
    digitalWrite(ledB, HIGH);
    digitalWrite(ledC, LOW);
    digitalWrite(ledD, HIGH);
    delay(500);
    //İLK 2. VE 3. LED AÇIK
    digitalWrite(ledA, HIGH);
    digitalWrite(ledB, HIGH);
    digitalWrite(ledC, HIGH);
    digitalWrite(ledD, LOW);
    delay(500);
    //HEPSİ AÇIK
    digitalWrite(ledA, HIGH);
    digitalWrite(ledB, HIGH);
    digitalWrite(ledC, HIGH);
    digitalWrite(ledD, HIGH);
    delay(500);
    }   
}
