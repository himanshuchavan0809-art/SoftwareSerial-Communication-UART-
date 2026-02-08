#include<SoftwareSerial.h>
int rx=2; //Arduino PIN 2
int tx=3; //Arduino PIN 3
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
  if (MySerial.available()>0)
  {
    String mess= MySerial.readString();
    Serial.print("Message Recieved: ");
    Serial.println(mess);

  }
}
