const int valveControlpin = 6;
const int photoInputPin   = 5;

void setup() {
  pinMode(valveControlpin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int photoValue = analogRead(photoInputPin);
  Serial.println(photoValue);

  if (photoValue > 150) {
    closeValve();
  } else {
    openValve();
  }
  //delayInMinutes(1);
  delay(1000 * 3);
}

void openValve() {
  digitalWrite(valveControlpin, HIGH);
}

void closeValve() {
  digitalWrite(valveControlpin, LOW);
}

void delayInMinutes(int minutes) {
  delay(1000 * 60 * minutes);
}

