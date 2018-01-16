/**
 * dice.h - Library for controlling a LED die.
 * Created by Andre Hoehnke, December 20, 2017.
 * Not Public.
 */
#ifndef _dice_h_
#define _dice_h_

#include "Arduino.h"

class Dice {
  public:
  /**
   * creates a dice object
   * LEDs must be in an special arrangement:
   * | LED-Nr.|
   * | 0   1  |
   * | 4 6 5  |
   * | 3   2  |
   * 
   */
  Dice(unsigned char topLeft, unsigned char topRight, 
      unsigned char lowerRight, unsigned char lowerLeft, 
      unsigned char midLeft, unsigned char midRight, 
      unsigned char midMid);
      
  void init(unsigned char pin1, unsigned char pin2, 
      unsigned char pin3, unsigned char pin4, 
      unsigned char pin5, unsigned char pin6, 
      unsigned char pin7);
      
  /**
   * sets the displayTime
   */
  void setDisplayTime(int time);
  
  /**
   * resets all LEDs
   */
  void reset();
  
  /**
   * shows a number
   */
  void show1();
  void show2();
  void show3();
  void show4();
  void show5();
  void show6();
  
  /**
   * shows the selected number for a
   * specific time
   */
  void showNumber(int number);
  /**
   * Plays an animation and repeats it [count] times
   */
  void animation(int count);
  
  private:
  unsigned int displayTime;
  unsigned char ledPins[7];
};

#endif
