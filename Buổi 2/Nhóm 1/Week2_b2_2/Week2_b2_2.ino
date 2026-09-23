int led[] = {25, 26, 27};

// Chuỗi sáng 2: 1>2>3>1>2>3
int sequence[] = {0, 1, 2, 0, 1, 2};

void setup() {
  for (int i = 0; i < 3; i++) {
    pinMode(led[i], OUTPUT);
    digitalWrite(led[i], LOW);
  }
}

void loop() {

  for (int i = 0; i < 6; i++) {

    digitalWrite(led[sequence[i]], HIGH);
    delay(1000);

    digitalWrite(led[sequence[i]], LOW);
  }
}