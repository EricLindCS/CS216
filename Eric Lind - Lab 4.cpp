/*
  Name: Eric Lind
  Date: 1/12/2024
  Class: CS216
  Lab 4
*/


#include <iostream>

//global variables for array size
const int ROW_SIZE = 3;
const int COLUMN_SIZE = 4;

//Location class definition
class Location {
  public:
    int row;
    int column;
    double maxValue;
};

//function that returns a locaiton object with the largest value found in a 2-d array
Location locateLargest(const double a[][COLUMN_SIZE]) {
    
  //Temporary instance values
  Location loc;

  //set the location object's "largest" values to the first value in the array
  loc.maxValue = a[0][0];
  loc.row = 0;
  loc.column = 0;

  //Iterate through array, replacing the largest value if a larger value is found
  for (int i = 0; i < ROW_SIZE; ++i) {
      for (int j = 0; j < COLUMN_SIZE; ++j) {
            if (a[i][j] > loc.maxValue) {
              loc.maxValue = a[i][j];
              loc.row = i+1;
             loc.column = j+1;
          }
      }
  }

  //return the location object that corresponds to the largest number in the array
  return loc;
}

int main() {

  //2-d array defintion
  double array[ROW_SIZE][COLUMN_SIZE];

  //Prompt user for input and fill 2-d array with the user's input
  std::cout << "Enter a " << ROW_SIZE << "-by-" << COLUMN_SIZE << " two-dimensional array:" << std::endl;
  for (int i = 0; i < ROW_SIZE; ++i) {
      for (int j = 0; j < COLUMN_SIZE; ++j) {
          std::cin >> array[i][j];
      }
  }

  //Call the function that finds the largest element and print the results
  Location maxLocation = locateLargest(array);
  std::cout << "The location of the largest element is " << maxLocation.maxValue
    << " at (" << maxLocation.row << ", " << maxLocation.column << ")" << std::endl;

  //End of Program
  return 0;
}

////Sample Output

/*
Enter a 3-by-4 two-dimensional array:
4 5 6 7
45 667 55 77
0 10000 4 12020302
The location of the largest element is 1.20203e+07 at (3, 4)
*/