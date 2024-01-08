/*
  Name: Eric Lind
  Date: 1/10/2024
  Class: CS216
  Lab 3
*/

/*

UML Diagram for the EvenNumber Class

------------------------------
|          EvenNumber        |
------------------------------
| value: int                 |
------------------------------
| EvenNumber()               |
| EvenNumber(int input)      |
| getValue(): int            |
| getNext(): EvenNumber      |
| getPrevious(): EvenNumber  |
------------------------------

*/

#include <iostream>
using namespace std;

class EvenNumber {

  private:
    
    int value;

  public:

    // No-arg constructor
    EvenNumber() {
      value=0;
    }

    // Constructor with specified value
    EvenNumber(int input) {
      value = ((input % 2 == 0) ? input : input + 1);
    } 

    // Getter for object's value
    int getValue() {
        return value;
    }

    // Function to return an EvenNumber object that represents the next even number
    EvenNumber getNext() {
        return EvenNumber(value + 2);
    }

    // Function to return an EvenNumber object that represets the previous even number
    EvenNumber getPrevious() {
        return EvenNumber(value - 2);
    }
};

int main() {
  
    //Create object of EvenNumber with value 16 and output results
    EvenNumber number1(16);
  
    cout << "Your Value: " << number1.getValue() << endl;  
    cout << "Next Even Number: " << number1.getNext().getValue() << endl;  
    cout << "Previous Even Number: " << number1.getPrevious().getValue() << endl << endl; 

    //Create object of EvenNumber with value 5 and output results
    EvenNumber number2(5);
    cout << "Your Value: " << number2.getValue() << endl;  
    cout << "Next Even Number: " << number2.getNext().getValue() << endl; 

    //End Program
    return 0;
}

////PROGRAM SAMPLE RUN//// (Input Values: 16 and 5)
/*
Your Value: 16
Next Even Number: 18
Previous Even Number: 14

Your Value: 6
Next Even Number: 8
*/
