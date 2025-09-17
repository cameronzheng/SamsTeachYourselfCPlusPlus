# Lesson 5: Working with Expresssions, Statements, and Operators
## Statements
## Compound Statements, or Blocks
## Using Operators

# Summary
In this lesson, you learned what C++ statements, expresssions, and operations are. You learned how to perform basic arithmetic operations such as addition, subtraction, multiplication, and division in C++. You also got an overview of logical operations such as `NOT`, `AND`, `OR`, and `XOR`. You learned about the C++ logical operators `!`, `&&`, and `||`, which help you in conditional statements, and the bitwise operators, such as `~`, `&`, `|`, and `^`, which help you manipulate data, 1 bit at a time.

You learned about operator precedence and how important it is to use parenthesis to write code that can also be understood by humans. You took a look at integer overflow and why it must be avoided.

# Q&A
## Q Why do some programs use `unsigned int` if `unsigned short` takes less memory and compiles too?
`unsigned short` typically has a limit of 65,535, and if incremented, it overflows to 0. To avoid this behavior, well-programmed applications choose `unsigned int` when it is not certain that the value will stay well below this limit.

## Q I need to calculate the double of a number after it's divided by three. Do you see any problem with using the following code to do this?
### `int result = Number / 3 << 1;`
Yes, use a parenthesis to make this line simpler for other programmers to read.

## Q My application divides two integer values 5 and 2:
### `int num1 = 5, num2 = 2;`
### `int result = num1 / num2;`
### On execution, the result contains the value 2. Isn't this wrong?
No, Integers are not meant to contain decimal data. the result of this operation is hence 2 and not 2.5. If 2.5 is the result you expect, change all data types to float or double, which are meant to handle floating-point (decimal) operations.


# Workshop
## Quiz
### 1. If you are writing an application to divide numbers, which data type would be best: int or float?
`float` would be used since `int` cannot contain decimal values that are possibly relevant for the user who wants to divide two numbers.

### 2. What is the value of 32 / 7?
4 since the compiler interprets them to be integers.

### 3. What is the value of 32.0/7?
4.571 since the compiler views the numerator `32.0` as a floating-point operand and results in a `float`.

### 4. Is `sizeof(...)` a function?
No, `sizeof(...)` is not a function. `sizeof(...)` is an operator that cannot be defined by a programmer and hence cannot be over-loaded.

### 5. You need to compute the double of a number, add 5 to it, and then double it again. Would the following line do this?
### `int result = number << 1 + 5 << 1;`
No, it would add the 1 and the 5 together first since they are a higher rank in terms of operation.

### 6. What is the result of an XOR operation where the XOR operands both evaluate to true?
The result is false.

# Exercises
## 1. Improve on the code in Quiz Question 5, using parentheses to provide clarity.
`int result = ((number << 1) + 5) << 1;`

## 2. What is the value of result stored by the following expression?
### `int result = number << 1 + 5 << 1;`
`number` is multiplied by 2, 6 times, then doubled again. Otherwise known to be shifted 7 times to the left.

## 3. Write a program that asks the user to input two Boolean values and demonstrates the results of various bitwise operators on them.