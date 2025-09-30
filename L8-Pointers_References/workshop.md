# Lesson 8: Pointers and References Explained

### Summary
- Pointers
  - Access and manipulate memory
  - Assist in dynamic memory allocation
  - `new` and `delete` to allocate memory for an element
  - `new...[]` and `delete[]` to allocate memory for an array of data
  - Traps in pointer programming and dynamic allocation
  - Imporatance in releasing dynamically allocation memory to avoid memory leaks
- References
  - References are aliases and powerful alternative to using pointers when passign arguments to functions
- `const` correctness
  - Delcaring functions with the most restrictive level of `const`-ness in parameters as possible


## Q&A
### Why dynamically allocate when you can make do with static arrays, where you don't need to worry about deallocation?
- Static arrays have a fixed size and will neither scale upward if your application needs more memory nor optimize if your application needs less. This is where dynamic memory allocation makes a difference.

### I have two pointers:
### `int* pointToAnInt = new int;`
### `int* pCopy = pointToAnInt;`
### Am I not better off calling `delete` using both to be sure that the memory used is released?
- Doing that would be wrong. You are allowed to invoke `delete` only once on the address returned by `new`. Also, you should ideally avoid having two pointers pointing to the same address because performing `delete` on any one would invalidate the other. Your program should also not be written in such a way that you have uncertainty about the validity of pointers used.

### When should I use `new(nothrow)`?
- If you don't want to handle the exception `std::bad_alloc`, you use the `nothrow` version of the operator `new`, which returns `NULL` when the requested allocation fails. If using the `nothrow` version, remember to check for pointer validity by checking against `NULL`.

### I can call a function to calculate area using the following two methods:
### `void CalculateArea (const double* const ptrRadius, double* const ptrArea);`
### `void CalculateArea (const double& radius, double& area);`
### Which variant should I prefer?
- The latter one, which uses references, as references cannot be invalid, whereas pointers can be. In addition, it is simpler.

### I have a pointer:
### `int number = 30;`
### `const int* pointToAnInt = &number;`
### I understand that I cannot change the value of `number` using the pointer `pointToAnInt` due to the `const` declaration. Can I assign `pointToAnInt` to a non-`const` pointer and then use it to manipulate the value contained in the integer `number`?
- No, you cannot change the `const`-correctness of the pointer:

`int* pAnother = pointToAnInt; // error`

### Why should I bother passing values to a function by references?
- You don't need to so long as it doesn't affect your program performance much. However, if your function parameters accept objects that are quite heavy (that is, large in bytes), then passing by value would be quite an expensive operation. Your function call would be a lot more efficient in using references. Remember to use `const` generously, except where the function needs to store a result in a variable.

### What is the difference between these two declarations?
### `int myNumbers[100];`
### `int* myArrays[100];`
`myNumbers` is an array of integers -- that is, `myNumbers` is a pointer to memory location that holds 100 integers and points to the first one, at index 0. It is the static alternative to the following:
`int* myNumbers = new int [100]; // dynamically allocated array`
`// use myNumbers`
`delete[] myNumbers`

`myArrays`, on the other hand, is an array of 100 pointers, where each pointer is capable of pointing to an integer or an array of integers.

## Workshop
### Quiz

### 1. Why can't you assign a `const` reference to a non-`const` reference?
If the compiler lets you do that, it would be an easy way to break exactly what `const` references were meant to protect: the data being referred to that cannot be changed.

### 2. Are `new` and `delete` functions?
No, they are operators.

### 3. What is the nature of the value contained in a pointer variable?
The value in a pointer variable is a memory address.

### 4. What operator would you use to access the data pointed to by a pointer?
The operator `*`.