#define trigPin 9
#define echoPin 8
 
void setup() {
Serial.begin (9600);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
}
void loop() {
long sure, mesafe;
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
sure = pulseIn(echoPin, HIGH);
mesafe = (sure/2) / 29.1;
   if (mesafe > 20 || mesafe < 0){
   Serial.println("Doğru ölçüm için lütfen yaklaşınız");
   }
   else {
   Serial.print(mesafe);
   Serial.println(" cm");
   }
delay(500);
}
