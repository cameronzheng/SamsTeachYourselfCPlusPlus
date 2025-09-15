/*
  ---------- EXERCISE 2 ----------
  BUG BUSTERS: What is wrong with this code fragment?
  `
    int myNumbers[5];
    myNumbers[5] = 450; // Setting the 5th element to value 450
  `
*/

// You can't set the 5th element to a value. The index for the last value is 4 with a zero-based indexed array. Therefore, this code is faulty
#include <iostream>
using namespace std;

int main()
{
  cout << "Exercise 2" << endl;
  int myNumbers[5];
  myNumbers[4] = 450; // sets the last element to 450
}