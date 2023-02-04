int out = 12;
int in = 4;
int rd;
void setup()

{

  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(in, INPUT);
  Serial.begin(9600);
}

void loop()

{

  rd = digitalRead(in);

  if (rd == HIGH)
  {
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
    delay(100);

    Serial.println("level raising");
  }

  else
  {
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    delay(100);

    Serial.println("level decrease");
  }

}
