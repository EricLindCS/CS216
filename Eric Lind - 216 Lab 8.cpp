/*
  Name: Eric Lind
  Date: 1/28/2024
  Class: CS216
  Lab: Lab 8 - Chapter 15
  15.1 (The Triangle class)
*/

////UML DIAGRAMS////
/*
+-------------------------+
|     GeometricObject     |
+-------------------------+
| -color: string          |
| -filled: bool           |
+-------------------------+
| +GeometricObject()      |
| +GeometricObject(       |
|   string, bool)         |
| +getColor(): string     |
| +setColor(string)       |
| +isFilled(): bool       |
| +setFilled(bool)        |
| +getArea(): double      |
| +getPerimeter(): double |
+-------------------------+
         ^
         |
         |
+-------------------------+
|         Triangle        |
+-------------------------+
| -side1: double          |
| -side2: double          |
| -side3: double          |
+-------------------------+
| +Triangle()             |
| +Triangle(side1:        |
|   double, side2:        |
|   double, side3:        |
|   double)               |
| +getSide1(): double     |
| +getSide2(): double     |
| +getSide3(): double     |
| +getArea(): double      |
| +getPerimeter(): double |
| +printTriangle(): string|
+-------------------------+
*/

#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

class GeometricObject {
  private:
    string color;
    bool filled;

  public:
    GeometricObject() : color("white"), filled(false) {}
    GeometricObject(const string& color, bool filled) : color(color), filled(filled) {}

    string getColor() const {
        return color;
    }

    void setColor(const string& color) {
        this->color = color;
    }

    bool isFilled() const {
        return filled;
    }

    void setFilled(bool filled) {
        this->filled = filled;
    }

};

class Triangle : public GeometricObject {

  private:

    double side1, side2, side3;

  public:

    Triangle() : side1(1.0), side2(1.0), side3(1.0) {}
    Triangle(double side1, double side2, double side3) : side1(side1), side2(side2), side3(side3) {}

    //Accessor Function for side 1
    double getSide1() const {
        return side1;
    }

    //Accessor Function for side 2
    double getSide2() const {
        return side2;
    }

    //Accessor Function for side 3
    double getSide3() const {
        return side3;
    }

    //Calculate and return area of a triangle using Heron's Formula
    double getArea() const {
        double s = (side1 + side2 + side3) / 2.0;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    //Calculate and return triangle perimiter (sum of three sides)
    double getPerimeter() const {
        return side1 + side2 + side3;
    }

    //Print the triangle object's information to console
    string printTriangle() const {
        stringstream ss;
        ss << "Area: " << getArea() << endl
           << "Perimeter: " << getPerimeter() << endl
           << "Color: " << getColor() << endl
           << "Filled: " << (isFilled() ? "true" : "false");
        return ss.str();
    }
};

int main() {
    //Declare variables that will be used to store user input
    double side1, side2, side3;
    string color;
    bool filled;

    // Prompt user and get input
    cout << "Enter three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;

    cout << "Enter color: ";
    cin >> color;

    cout << "Enter 1 (true) or 0 (false) for filled: ";
    cin >> filled;

    // Create Triangle object
    Triangle triangle(side1, side2, side3);
    triangle.setColor(color);
    triangle.setFilled(filled);

    // Display information
    cout << "\nTriangle Information:\n";
    cout << triangle.printTriangle() << endl;

    //End of Program
    return 0;
}

/*
////PROGRAM OUTPUT////
command>cl Exercise15_01.cpp
Microsoft C++ Compiler 2019 
Compiled successful

command>Exercise15_01
Enter three sides of the triangle: 1.5 1.5 1.5
Enter color: Yellow
Enter 1 (true) or 0 (false) for filled: 1

Triangle Information:
Area: 0.974279
Perimeter: 4.5
Color: Yellow
Filled: true

command>
*/