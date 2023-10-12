const int btn1 = 2;
const int btn2 = 3;
const int btn3 = 4;
const int led1 = 5;
const int led2 = 6;
const int led3 = 7;

int btnstate1 = 0;
int btnstate2 = 0;
int btnstate3 = 0;

bool ledstate1 = false;
bool ledstate2 = false;
bool ledstate3 = false;

void setup() 
{
  pinMode(btn1, INPUT);
  pinMode(btn2, INPUT);
  pinMode(btn3, INPUT);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void ledBlink(int ledPin) {
  digitalWrite(ledPin, HIGH);
  delay(200);
  digitalWrite(ledPin, LOW);
  delay(200);
}

void loop() 
{
  btnstate1 = digitalRead(btn1);
  btnstate2 = digitalRead(btn2);
  btnstate3 = digitalRead(btn3);

  if (btnstate1 == HIGH) 
  {
    ledBlink(led1);
  }

  if (btnstate2 == HIGH) 
  {
    ledBlink(led2);
  }

  if (btnstate3 == HIGH) 
  {
    digitalWrite(led3, HIGH);
  } 
  else 
  {
    digitalWrite(led3, LOW);
  }

  delay(50);
}