// Welcome to Aviyan's Thoughts

const int ldr = D2;
const int led = D0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ldr, INPUT);
  pinMode(led, OUTPUT);
  delay(100);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = digitalRead(ldr);
  if(value == 1){
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);
  }
  Serial.println(value);
  delay(200);
}
