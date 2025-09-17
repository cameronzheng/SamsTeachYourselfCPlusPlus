#include <iostream>
using namespace std;

int main()
{
  int num1, num2;
  cout << "Enter two integers" << endl;
  cin >> num1;
  cin >> num2;

  auto resultOfComparison = (num1 <=> num2);  // introduced in c++20

  // cout << "value of <=> : " << resultOfComparison << endl;

  if (resultOfComparison < 0)
  {
    cout << "num1 is less than num2" << endl;
  }
  else if (resultOfComparison > 0)
  {
    cout << "num1 is greater than num2" << endl;
  }
  else
  {
    cout << "num1 is equal to num2" << endl;
  }

  return 0;
}