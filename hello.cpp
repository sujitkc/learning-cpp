#include <iostream>

using namespace std;

namespace skc {
  const float PI = 3.141;
}

int main() {
  int x;
  cout << "Enter the value: ";
  cout << "Hello world!" << endl;

  int array[] = { 10, 20, 30, 40, 50 }; // homogeneously typed arrays
  // statically typed languages always support only homogeneously
  // typed containers.

  cout << "Size of array = " << sizeof(array) << endl;
  cout << "Size of int = " << sizeof(int) << endl;
  
  int array_length = sizeof(array) / sizeof(int);

  cout << "for-ing ..." << endl; 
  for(int i; i < array_length; i++) { // pre-increment (++i) post-increment (i++)
    cout << array[i] << endl;
  }

  cout << "while-ing ..." << endl;
  int i = 0;
  while(i < array_length) {
    cout << array[i] << endl;
    i++; // equivalent i = i + 1 or i += 1
  }
  return 0;
}

/*
C++ calls modules as namespace.
:: is called scope resolution operator.

a.cpp -> a.o
b.cpp -> b.o

link a.o b.o ---> hello

from module import * C++ equivalent: using

explicit/implicit typing is different from static typing/dynamic typing

Static typing: Type checking happening during compilation.
Dynamic typing: Type checking happens at runtime.
*/
