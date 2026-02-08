#include<SoftwareSerial.h>
int rx=4; //Arduino UNO pin 4
int tx=5; //Arduino UNO pin 5
SoftwareSerial MySerial= SoftwareSerial(rx,tx);
void setup()
{
  Serial.begin(9600);
  MySerial.begin(9600);
  pinMode(rx, INPUT);
  pinMode(tx, OUTPUT);
}
void loop()
{
  while(Serial.available()==0);
  String val= Serial.readString();
  MySerial.write(val.c_str());
}