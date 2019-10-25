#include <Arduino.h>
#include "settings.h"
#include "lineSensor.h"

int vallimite[]={
  500,//Right
  660,//mid
  150//left
  
};

void init_lineSensors()
{
  pinMode(lineSensorLeft,INPUT);
  pinMode(lineSensorMid,INPUT);
  pinMode(lineSensorRight,INPUT);  
}

char readsensorTypeA(int pin)
{
  return (analogRead(pin)>vallimite[pin - 14]);//650
}
char readsensorTypeB(int pin)
{
  return (analogRead(pin)<vallimite[pin - 14]);//650
}

unsigned char readLineSensors()
{
  return (readsensorTypeA(lineSensorLeft) << 2) | (readsensorTypeB(lineSensorMid) << 1) | (readsensorTypeA(lineSensorRight) ) ;
}
void debugLineSensors()
{
  while(1){
    Serial.print(readLineSensors(),BIN);
    Serial.print(":");Serial.print(analogRead(lineSensorLeft))  ;
    Serial.print(" ");Serial.print(analogRead(lineSensorMid));
    Serial.print(" ");Serial.println(analogRead(lineSensorRight));
    
    delay(1000);
  }
  
}


