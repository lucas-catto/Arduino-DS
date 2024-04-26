// C++ code
//

byte led1 = 9;
byte led2 = 10;
byte led3 = 11;

int ldr    = A0;
int valmed = 0;

/* CONST X VALOR */

void setup() {
  
  Serial.begin(9600);
  
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  Serial.println(analogRead(ldr));
                 
  valmed = map(analogRead(A0), 0, 947, 0, 255);
  
  analogWrite(led1, valmed);
  analogWrite(led2, valmed);
  analogWrite(led3, valmed);
}
