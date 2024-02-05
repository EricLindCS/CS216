/*
  Date: 2/3/2024
  Class: CS216
  Lab: Lab 10 - Chapter 17
  17.9 (Print the characters in a string reversely)
*/

#include <iostream>
#include <string>

using namespace std;

void reverseDisplay(const string& s) {
  // Base case: do nothing for an empty string
  if (s.empty()) {
    return; 
  } 
  else {
    // Display the last character in the string
    cout << s.back();
    // Recursively call with the substring excluding the last character
    reverseDisplay(s.substr(0, s.length() - 1));
  }
}

int main() {
  string userInput;

  // Prompt the user to enter a string
  cout << "Enter a string: ";
  cin >> userInput;

  // Display the reversal of the input string
  cout << "The reversal of " << userInput << " is ";
  reverseDisplay(userInput);
  cout << endl;

  //End of Program
  return 0;
}

////SAMPLE PROGRAM OUTPUT
/*
Enter a string: 22jkasjdhadha
The reversal of 22jkasjdhadha is ahdahdjsakj22

Enter a string: oOp[*ios";'
The reversal of oOp[*ios";' is ';"soi*[pOo

Enter a string: c++
The reversal of c++ is ++c
*/