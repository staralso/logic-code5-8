const int buttonPin=2;
const int ledPin=13;
int buttonstate=0;
void setup() {
  // put your setup code here, to run once:
pinMode(ledPin,OUTPUT);
pinMode(buttonPin,INPUT);
digitalWrite(buttonPin,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
 buttonstate=digitalRead(buttonPin);
 if( buttonstate==HIGH)
 {
  digitalWrite(ledPin,HIGH);
  }
 else
 {
  digitalWrite(ledPin,LOW);
  }
}
