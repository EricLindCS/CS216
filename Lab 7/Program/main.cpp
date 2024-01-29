/*
  Name: Eric Lind
  Date: 1/25/2024
  Class: CS216
  Lab: Lab 7 - Chapter 14
  14.3 (The Circle class)
*/

#include <iostream>
#include "Circle.h"

using namespace std;

int main() {

  // Create Test Circle objects
  Circle circle1(9.0);
  Circle circle2(4.0);
  Circle circle3(9.0);

  // Testing relational operators
  cout << "circle1 < circle2: " << (circle1 < circle2) << endl;
  cout << "circle1 <= circle2: " << (circle1 <= circle2) << endl;
  cout << "circle1 == circle3: " << (circle1 == circle3) << endl;
  cout << "circle1 != circle2: " << (circle1 != circle2) << endl;
  cout << "circle1 > circle2: " << (circle1 > circle2) << endl;
  cout << "circle1 >= circle2: " << (circle1 >= circle2) << endl;

  //End of Program
  return 0;
}

//SAMPLE PROGRAM OUTPUT

/*
  circle1 < circle2: 0
  circle1 <= circle2: 0
  circle1 == circle3: 1
  circle1 != circle2: 1
  circle1 > circle2: 1
  circle1 >= circle2: 1
*/