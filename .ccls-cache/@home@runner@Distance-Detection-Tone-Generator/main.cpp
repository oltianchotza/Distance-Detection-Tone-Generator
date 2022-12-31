int Val = 0;

long readUltrasonicDistance(int triggerPin, int echoPin) {
  pinMode(triggerPin, OUTPUT); // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup() {
  Serial.begin(9600);
  pinMode(10, OUTPUT);
}

void loop() {
  Val = 0.006783 * readUltrasonicDistance(9, 8);
  Serial.println(Val);

  if (Val <= 20) {
    tone(10, 5274, 500);
  } else if (Val <= 30) {
    tone(10, 5274, 500);
    delay(250);
  } else if (Val <= 30) {
    tone(10, 5274, 500);
    delay(250);
  } else if (Val <= 40) {
    tone(10, 5274, 500);
    delay(500);
  } else if (Val <= 50) {
    tone(10, 5274, 500);
    delay(750);
  } else if (Val <= 60) {
    tone(10, 5274, 500);
    delay(1000);
  } else if (Val <= 70) {
    tone(10, 5274, 500);
    delay(1250);
  } else {
    noTone(10);
  }
}