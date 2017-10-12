#include <iostream>

int main() {
  int a{5};
  int* pi{&a};
  *pi = 9;
  std::cout << "a is now " << a << std::endl;

  char** ppc;

  int* ap[7]; // An array of pointers, and each pointer points to integer

  int (*fp)(char*); // Pointer to function that returns an integer and wants one pointer to rchar as argument

  int* f(char*); // Defines a function that returns a pointer to integer and gets a pointer to char as argument

  void* pv{pi}; // Pointer to anything, and does not know the size of the thing it's pointing to
  // *pv; // we cannot dereference void*
  // ++pv; // we cannot increment. Why?
  int* pi2 = static_cast<int*>(pv); // Convert pointer to void into pointer to integer

  pi = nullptr; // Null pointer: pointer points to NULL -----> DON'T USE NULL
  ppc = nullptr;
  // ap = nullptr;			// error, why?
  fp = nullptr;
  pv = nullptr;
  pi2 = 0;  // older codes. gets the nullptr

  const int* pc = &a; // Cannot change the value of the variable it's pointing to but not through it
  // *pc = 7; 			// error
  a = 15;  // I can obviously change a

  int* const cp = &a; // Can change the value of what it's pointing to but it cannot change the location of what it's pointing
  int b = 8;
  a = b;
  // cp = &b			// error

  const int* const cpc = &a;  // points to a fixed memory location
  // and cannot change it
  a = 99;

  return 0;
}
