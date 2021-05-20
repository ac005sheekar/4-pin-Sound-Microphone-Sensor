int buzzer = 11;
int sound = A5;
int limit = 100;

void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(sound, INPUT);

}

void loop() {
  int soundvalue = analogRead(sound);
  if(soundvalue >= limit)
  {
    digitalWrite(buzzer, HIGH);
    delay(1000);
  }
  else
  {
    digitalWrite(buzzer, LOW);
  }

}
