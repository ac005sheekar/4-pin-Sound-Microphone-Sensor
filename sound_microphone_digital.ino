int sound = 9;

void setup() {
  pinMode(sound, INPUT);
  Serial.begin(9600);

}

void loop() {
  Serial.println(digitalRead(sound));
  delay(50);

}
