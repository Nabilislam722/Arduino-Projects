int ledstate= 1;
int pushbutton= A5;
int ledpin= 8;
int newval = 1;
int oldval = 0;

// This is a toggle switch code but It's for push up switch which means button output will be 1 when button is not pushed.
// when button is pushed value will be 0

void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin, OUTPUT);
  pinMode(pushbutton, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  newval= digitalRead(pushbutton);
  
  if (oldval == 0 && newval == 1){
    if (ledstate==0){
      digitalWrite(ledpin, HIGH);
      ledstate=1;
      Serial.println(ledstate);
    }
    else{
      digitalWrite(ledpin, LOW);
      ledstate= 0;
    }
  }
  oldval=newval;
  delay(100);

  // Coded by Nabil

}
