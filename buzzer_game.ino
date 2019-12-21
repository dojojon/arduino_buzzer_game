
const int wirePin = 7;
const int buzzerPin = 11;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(wirePin, INPUT);

  pinMode(buzzerPin, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  if(digitalRead(wirePin)){
    Serial.println("Buzzer");
    tone(buzzerPin, 400, 200);
    tone(buzzerPin, 600, 200);
    
  }else{
    Serial.println("-");
  }
  
}
