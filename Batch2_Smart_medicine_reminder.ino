int ir=3;
int led1=5;
int led2=4;
int c=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ir,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  c=c+1;
  int x=digitalRead(ir);
  Serial.print("ir:");
  Serial.println(x);
  delay(1000);
 
  if(c>10)
  {
   Serial.println( "Time to take medicine");
   digitalWrite(led1,HIGH);
   delay(1000);
   digitalWrite(led1,LOW);
   delay(1000);
   
    if(x==0)
  {
    c=0;
    Serial.println("Medicine taken");
    digitalWrite(led2,LOW);
  
  } 
  else
  {
   Serial.println("Medicine not taken");
    digitalWrite(led2,HIGH);
  
  }
  }
 
  
  

}
