/*

Eric Lind
CS216 
Lab 2
Date CreatedL 1/15/2024

*/

#include <iostream>
using namespace std;

//Define array of lockers
bool lockers[100];

//Function to open and close lockers based on the student in the sequence "doing so"
void switchLockers(int s) {

    //Start at the student's position and incremenet by the student's number in locker order
    for (int i = s - 1; i < 100; i += s) {
        //Set the landed on locker to the opposite of its previous value
        lockers[i] = !lockers[i];
    }
}

//Function to close all lockers called at program start
void setAllClosed() {
    for (int i = 0; i < 100; i++) {
        lockers[i] = false;
    }
}

//Function to print the locker numbers that are open (indexes in array that are true))
void printLockers() {
    for (int i = 0; i < 100; i++) {
        if (lockers[i]) {
            cout << i + 1 << " "; // Adding 1 to i to print locker numbers starting from 1 instead of 0
        }
    }
}

int main() {

    //Close all lockers
    setAllClosed();

    //Perform the 100 student sequence
    for (int i = 1; i <= 100; i++) {
        switchLockers(i);
    }

    //Print open locker numbers to console
    printLockers();

    //End of Program
    return 0;
}

/////Program Output////
/*
1 4 9 16 25 36 49 64 81 100 
*/
