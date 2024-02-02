/*
  Name: Eric Lind
  Date: 1/30/2024
  Class: CS216
  Lab: Lab 9 - Chapter 16
  16.3 (Modify the Course class)
*/

#include <iostream>
#include "Course.h"
using namespace std;

int main()
{
  //Insantiate two test Course objects
  Course course1("Data Structures", 10);

  //Populate course objects with students
  
  //To test error handling, uncomment the following lines
  /*
  course1.addStudent("Pablo Jones");
  course1.addStudent("Ian Smith");
  course1.addStudent("Frank Kennedy");
  course1.addStudent("Jasper Jones");
  course1.addStudent("John Smith");
  course1.addStudent("Tom Kennedy");
  course1.addStudent("Jessica Jones");
  course1.addStudent("Yonatan Jones");
  */
  
  course1.addStudent("Peter Jones");
  course1.addStudent("Brian Smith");
  course1.addStudent("Anne Kennedy");

  //Attempt to drop student from the course (present and non-present student)
  course1.dropStudent("Anne Knnedy");
  course1.dropStudent("Anne Kennedy");
  
  //Print the course contents for testing
  cout << "Number of students in course1: " <<
    course1.getNumberOfStudents() << "\n";
  string* students = course1.getStudents(); // Get all students in course1
  for (int i = 0; i < course1.getNumberOfStudents(); i++)
    cout << students[i] << ", ";

  return 0;
}

////SAMPLE OUTPUT////

/* ///With <=10 students in course

  Error: Student 'Anne Knnedy' not found in the course.
  Number of students in course1: 2
  Peter Jones, Brian Smith, 

*/

/* ///With >10 students in course

  terminate called after throwing an instance of 'std::runtime_error'
  what():  Course is at maximum capacity. Cannot add more students.
  
*/