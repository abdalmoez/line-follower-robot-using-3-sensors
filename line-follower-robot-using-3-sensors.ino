#include "lineSensor.h"
#include "basic.h"

void setup() {
  Serial.begin(9600);
  init_motors();
  init_lineSensors();
 
}

void loop() {
  suiveur();
 // delay(500);
}

void suiveur()
{
  int a = readLineSensors();
  Serial.println(a,BIN);
  switch(a)
  {
    case 0b000:forward(); break;
    case 0b001:rotateLeft(); break;
    case 0b010:forward(); break;
    case 0b011:rotateLeft(); break;
    case 0b100:rotateRight(); break;
    case 0b101:forward(); break;
    case 0b110:rotateRight(); break;
    case 0b111:backward(); break;
  }
}

