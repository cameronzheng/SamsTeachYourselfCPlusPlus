#include <iostream>
#include <bitset>
using namespace std;

/*
  Write a program that asks the user to input two Boolean values and demonstrates the results of various bitwise operators on them
*/

int main()
{
  cout << "Enter a number (0 - 255)" << endl;
  int inputNum;
  cin >> inputNum;

  bitset<8> inputBits (inputNum);
  cout << inputNum << " in binary is " << inputBits << endl;

  bitset<8> bitwiseNOT = (~inputNum);
  cout << "Bitwise NOT !" << endl;
  cout << "~" << inputBits << " = " << bitwiseNOT << endl;

  return 0;
}