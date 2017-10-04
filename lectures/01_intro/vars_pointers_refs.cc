#include <iostream>

int main() {
  double d = 9.9;
  double &ref = d;
  double *ptr = &d;
  std::cout << "content of   d: " << d << std::endl;
  std::cout << "content of ref: " << ref << std::endl;
  std::cout << "content of ptr: " << ptr << std::endl << std::endl;
  
  std::cout << "address of   d: " << &d << std::endl;
  std::cout << "address of ref: " << &ref << std::endl;
  std::cout << "address of ptr: " << &ptr << std::endl;
}
