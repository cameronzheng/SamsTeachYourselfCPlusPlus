/*
------------------------------ Exercises ------------------------------
1. Modify enum YourCards in Quiz question 4 to demonstrate that the value of Queen can be 45.

2. Write a program that demonstrates that the size of an unsigned integer and a normal integer
   are the same and that both are smaller in size than a long integer.

3. Write a program to calculate the area and circumference of a circle where the radius is 
   supplied by the user.

4. In Exercise 3, if the area and circumference were to be stored in integers, how would 
   the output be any different?
   
5. What is wrong with the following initialization?
   auto age;
-----------------------------------------------------------------------
*/
#include <iostream>
using namespace std;

void Q1(void);
void Q2(void);
void Q3(void);
void Q4(void);
void Q5(void);

int main()
{
  Q1();
  Q2();
  Q3();
  Q4();
  Q5();
  return 0;
}
/*
1. Modify enum YourCards in Quiz question 4 to demonstrate that the value of Queen can be 45.
*/
void Q1(void)
{
  cout << "---------- Question 1 ----------" << endl;
  enum YourCards 
  {
    Ace = 43,
    Jack,
    Queen,
    King
  };
  
  cout << "Queen = " << Queen << endl;
  
  YourCards AceVal = Ace;
  cout << "Variable AceVal = " << AceVal << endl;

  // alterntively 
  // enum YourCards {Ace, Jack, Queen = 45, King};
  // Ace = 0, Jack = 1, Queen = 45, King = 46
  cout << "--------------------------------" << endl;
}

/*
2. Write a program that demonstrates that the size of an unsigned integer and a normal integer
   are the same and that both are smaller in size than a long integer.
*/
void Q2()
{
  cout << "---------- Question 2 ----------" << endl;
  cout << "Computing size of unsigned integer vs normal integer in bytes" << endl;
  cout << "Size of unsigned integer = " << sizeof(unsigned int) << " bytes" << endl;
  cout << "Size of normal integer = " << sizeof(int) << " bytes" << endl;
  cout << "Size of long integer = " << sizeof(long int) << " bytes" << endl;
  cout << "--------------------------------" << endl;
}

/*
3. Write a program to calculate the area and circumference of a circle where the radius is 
   supplied by the user.
*/

consteval double GetPi() { return 22.0 / 7; }
void Q3()
{
  cout << "---------- Question 3 ----------" << endl;
  double pi = GetPi();
  double radius;
  cout << "Enter radius: ";
  cin >> radius;
  double area = pi * radius * radius;
  double circumference = 2 * pi * radius;
  cout << "Area of Circle = " << area << endl;
  cout << "Circumference of Circle = " << circumference << endl;
  cout << "--------------------------------" << endl;
}

/*
4. In Exercise 3, if the area and circumference were to be stored in integers, how would 
   the output be any different?
*/
void Q4()
{
  cout << "---------- Question 4 ----------" << endl;
  double pi = GetPi();
  int radius;
  cout << "Enter radius: ";
  cin >> radius;
  int area = pi * radius * radius;
  int circumference = 2 * pi * radius;
  cout << "Area of Circle as an integer = " << area << endl;
  cout << "Circumference of Circle as an integer = " << circumference << endl;
  cout << "--------------------------------" << endl;
}
   
/*
5. What is wrong with the following initialization?
   auto age;
*/
void Q5()
{
  cout << "---------- Question 5 ----------" << endl;
  auto age = 3;
  auto flag = true;
  cout << "Auto needs to have an initialization and hence fails compilation." << endl;
  cout << "Size of age using auto = " << sizeof(age) << endl;
  cout << "Size of flag using auto = " << sizeof(flag) << endl;
  cout << "--------------------------------" << endl;

}