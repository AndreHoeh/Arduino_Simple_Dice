#include "dice.h"

#include <stdio.h>
#include <string.h>
#include "Arduino.h"

Dice::Dice(unsigned char topLeft, unsigned char topRight, 
        unsigned char lowerRight, unsigned char lowerLeft, 
        unsigned char midLeft, unsigned char midRight, 
        unsigned char midMid) {
  this->showTime = 1000;
  
  init(topLeft, topRight, lowerRight, lowerLeft, 
      midLeft, midRight, midMid);
}

void Dice::init(unsigned char p1, unsigned char p2, 
      unsigned char p3, unsigned char p4, 
      unsigned char p5, unsigned char p6, 
      unsigned char p7) {
  ledPins[0] = p1;
  ledPins[1] = p2;
  ledPins[2] = p3;
  ledPins[3] = p4;
  ledPins[4] = p5;
  ledPins[5] = p6;
  ledPins[6] = p7;
  
  pinMode(ledPins[0], OUTPUT);
  pinMode(ledPins[1], OUTPUT);
  pinMode(ledPins[2], OUTPUT);
  pinMode(ledPins[3], OUTPUT);
  pinMode(ledPins[4], OUTPUT);
  pinMode(ledPins[5], OUTPUT);
  pinMode(ledPins[6], OUTPUT);
}

void Dice::setShowTime(int t){
  this->showTime = t;
}

void Dice::reset(){
  digitalWrite(ledPins[0], LOW);
  digitalWrite(ledPins[1], LOW);
  digitalWrite(ledPins[2], LOW);
  digitalWrite(ledPins[3], LOW);
  digitalWrite(ledPins[4], LOW);
  digitalWrite(ledPins[5], LOW);
  digitalWrite(ledPins[6], LOW);
}

void Dice::show1() {
  reset();
  digitalWrite(ledPins[6], HIGH);
}

void Dice::show2() {
  reset();
  digitalWrite(ledPins[0], HIGH);
  digitalWrite(ledPins[2], HIGH);
}

void Dice::show3() {
  reset();
  digitalWrite(ledPins[0], HIGH);
  digitalWrite(ledPins[2], HIGH);
  digitalWrite(ledPins[6], HIGH);
}

void Dice::show4() {
  reset();
  digitalWrite(ledPins[0], HIGH);
  digitalWrite(ledPins[1], HIGH);
  digitalWrite(ledPins[2], HIGH);
  digitalWrite(ledPins[3], HIGH);
}

void Dice::show5() {
  reset();
  digitalWrite(ledPins[0], HIGH);
  digitalWrite(ledPins[1], HIGH);
  digitalWrite(ledPins[2], HIGH);
  digitalWrite(ledPins[3], HIGH);
  digitalWrite(ledPins[6], HIGH);
}

void Dice::show6() {
  reset();
  digitalWrite(ledPins[0], HIGH);
  digitalWrite(ledPins[1], HIGH);
  digitalWrite(ledPins[2], HIGH);
  digitalWrite(ledPins[3], HIGH);
  digitalWrite(ledPins[4], HIGH);
  digitalWrite(ledPins[5], HIGH);
}

void Dice::showNumber(int n) {
  reset();
  switch (n) {
    case 1:
      show1();
      delay(showTime);
      break;
    case 2:
      show2();
      delay(showTime);
      break;
    case 3:
      show3();
      delay(showTime);
      break;
    case 4:
      show4();
      delay(showTime);
      break;
    case 5:
      show5();
      delay(showTime);
      break;
    case 6:
      show6();
      delay(showTime);
      break;
    default:
      break;
  }
  reset();
}

void Dice::animation() {
  int i = 0;
  reset();
  digitalWrite(ledPins[6], HIGH);
  delay(100);
  while(i < 10) {
    digitalWrite(ledPins[0], HIGH);
    digitalWrite(ledPins[4], LOW);
    delay(100);
    digitalWrite(ledPins[1], HIGH);
    digitalWrite(ledPins[0], LOW);
    delay(50);
    digitalWrite(ledPins[5], HIGH);
    digitalWrite(ledPins[1], LOW);
    delay(50);
    digitalWrite(ledPins[2], HIGH);
    digitalWrite(ledPins[5], LOW);
    delay(100);
    digitalWrite(ledPins[3], HIGH);
    digitalWrite(ledPins[2], LOW);
    delay(50);
    digitalWrite(ledPins[4], HIGH);
    digitalWrite(ledPins[3], LOW);
    delay(50);
    i++;
  }
  reset();
}