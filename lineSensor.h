#ifndef LINESENSOR_H
#define LINESENSOR_H

  #define LINESENSOR_BLACK 0
  #define LINESENSOR_WHITE !LINESENSOR_BLACK

  void init_lineSensors();
  char readsensor(int pin);
  unsigned char readLineSensors();
  void debugLineSensors();

#endif
