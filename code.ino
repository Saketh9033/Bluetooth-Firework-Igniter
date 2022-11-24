#include<SoftwareSerial.h>
int a=8;
int b=9;
int c=8;
int d=9;
String readString ;

void setup()
{
  Serial.begin(9600);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
 }

  
void loop()
{
  while (Serial.available()){
    delay(5);
    char c=Serial.read();
    readString =+c;
    Serial.println(readString);
    delay(10);
  }
  
 if (readString.length()>0){
  
    if(readString=="1"){
       digitalWrite(a,LOW);
     }
 
    if(readString=="2"){
      digitalWrite(a,HIGH);
     }

     if(readString=="3"){
       digitalWrite(b,LOW);
     }
 
    if(readString=="4"){
      digitalWrite(b,HIGH);
     }
 }

}
