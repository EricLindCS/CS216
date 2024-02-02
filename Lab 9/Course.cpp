#include <iostream>
#include "Course.h"
#include <stdexcept> // Include for runtime_error
using namespace std;

Course::Course(const string& courseName, int capacity) {
   numberOfStudents = 0;
   this->courseName = courseName;
   this->capacity = capacity;
   students = new string[capacity];
}

Course::~Course() {
   delete [] students;
}

string Course::getCourseName() const {
   return courseName;
}

void Course::addStudent(const string& name) {
   if (numberOfStudents < capacity) {
      students[numberOfStudents] = name;
      numberOfStudents++;
   } else {
     //Throw a runtime error if the course is at maximum capacity and a student is attempting to be added
      throw runtime_error("Course is at maximum capacity. Cannot add more students.");
   }
}

void Course::dropStudent(const string& name) {
  //Try-catach bloc to catch the runtime error thrown by the addStudent function if the student is not found in the course
   try {
      // Find the index of the student
      int index = -1;
      for (int i = 0; i < numberOfStudents; i++) {
         if (students[i] == name) {
            index = i;
            break;
         }
      }

      // If the student is found, remove them
      if (index != -1) {
         for (int i = index; i < numberOfStudents - 1; i++) {
            students[i] = students[i + 1];
         }
         numberOfStudents--;
      } 
      else {
        //If the student is not found, throw an error
        throw runtime_error("Student '" + name + "' not found in the course.");
      }
   } 
   catch (const runtime_error& e) {
     //Console-print error message
      cout << "Error: " << e.what() << endl;
   }
}

string* Course::getStudents() const {
   return students;
}

int Course::getNumberOfStudents() const {
   return numberOfStudents;
}