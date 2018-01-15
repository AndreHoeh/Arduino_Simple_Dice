/*
  dice.h - Library for controlling a LED die.
  Created by Andre Hoehnke, December 20, 2017.
  Not Public.
  
  Parameter arrangement:
  0   1
  4 6 5
  3   2
  
  
*/
#ifndef _dice_h_
#define _dice_h_

#include "Arduino.h"

class Dice {
  public:
  Dice(unsigned char topLeft, unsigned char topRight, 
      unsigned char lowerRight, unsigned char lowerLeft, 
      unsigned char midLeft, unsigned char midRight, 
      unsigned char midMid);
      
  void init(unsigned char pin1, unsigned char pin2, 
      unsigned char pin3, unsigned char pin4, 
      unsigned char pin5, unsigned char pin6, 
      unsigned char pin7);
      
  void setShowTime(int time);
  void reset();
  void show1();
  void show2();
  void show3();
  void show4();
  void show5();
  void show6();
  void showNumber(int number);
  void animation();
  private:
  unsigned int showTime;
  unsigned char ledPins[7];
};

#endif
