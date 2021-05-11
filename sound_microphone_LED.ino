int sound = 9;
int led = 13;

void setup() {
  pinMode(sound, INPUT);
  pinMode(led, OUTPUT);

}

void loop() {
  int reading = digitalRead(sound);
  if(reading == HIGH)
  {
    digitalWrite(led, HIGH);
  }
  else
  {
    digitalWrite(led, LOW);
  }

}
