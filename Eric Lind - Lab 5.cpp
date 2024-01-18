/*
  Name: Eric Lind
  Date: 1/18/2024
  Class: CS216
  Lab: Lab 5 - Chapter 11
*/

#include <iostream>
using namespace std;

// Function to find the largest element in the array
int findLargest(const int *arr, int size) {
  
  // Initialize max with the value of the first element
  int max = *arr; 

  //Iterate through array replacing largest value if a larger one is found
  for (int i = 1; i < size; ++i) {
    if (*(arr + i) > max) {
      max = *(arr + i);
    }
  }
  //Return max value
  return max;
}

// Function to find the smallest element in the array
int findSmallest(const int *arr, int size) {

  // Initialize min with the value of the first element
  int min = *arr; 

  //Iterate through array replacing smallest value if a smaller one is found
  for (int i = 1; i < size; ++i) {
    if (*(arr + i) < min) {
      min = *(arr + i);
    }
  }
  //Return min value
  return min;
}

int main() {
    //Define array
    int arr[] = {6, 7, 9, 10, 15, 3, 99, -21};

    //Find size of array
    int size = sizeof(arr) / sizeof(arr[0]);

    // Test the functions
    cout << "Largest Element In Array: " << findLargest(arr, size) << endl;
    cout << "Smallest Element In Array: " << findSmallest(arr, size) << endl;

    //End of program
    return 0;
}

/////SAMPLE OUTPUT/////
/*
Largest Element In Array: 99
Smallest Element In Array: -21
*/