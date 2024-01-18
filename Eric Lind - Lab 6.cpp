/*
  Name: Eric Lind
  Date: 1/18/2024
  Class: CS216
  Lab: Lab 6 - Chapter 12
*/

#include <iostream>
using namespace std;

//Search function/template prototype
template <typename T>
int binarySearch(const T list[], T key, int listSize);

int main()
{
  //Search integer array and print results
  int intArray[] = {1, 2, 3, 4, 8, 15, 23, 31, 45, 56, 67, 466, 656, 788, 899};
  int keyOne = 4;
  cout << "Index for " << keyOne << " in intArray: " << binarySearch(intArray, keyOne, sizeof(intArray) / sizeof(intArray[0])) << endl;

  //Search double array and print results
  double doubleArray[] = {0.1, 2.5, 3.6, 4.7, 8.8, 15.8, 23.4, 31.5, 45.6, 56.6, 67.5, 466.5, 656.7, 788.9, 899.9};
  double keyTwo = 4.7;
  cout << "Index for " << keyTwo << " in doubleArray: " << binarySearch(doubleArray, keyTwo, sizeof(doubleArray) / sizeof(doubleArray[0])) << endl;

  //Search string array and print results
  string cities[] = {"Atlanta", "Augusta", "Burbank", "Glendale", "Macon", "Pasadena", "Savannah", "Sylmar"};
  string keyThree = "Macon";
  cout << "Index for " << keyThree << " in cities: " << binarySearch(cities, keyThree, sizeof(cities) / sizeof(cities[0])) << endl;

  //End of Program
  return 0;
}

//Generic sort function
template <typename T>
int binarySearch(const T list[], T key, int listSize)
{
  int low = 0;
  int high = listSize - 1;

  while (high >= low)
  {
    int mid = (low + high) / 2;
    if (key < list[mid])
      high = mid - 1;
    else if (key == list[mid])
      return mid;
    else
      low = mid + 1;
  }

  return -low - 1;
}

//////Sample Output//////
/*
Index for 31 in intArray: 7
Index for 45.6 in doubleArray: 8
Index for 'Pasadena' in cities: 5
*/

/*
Index for 4 in intArray: 3
Index for 4.7 in doubleArray: 3
Index for Macon in cities: 4
*/