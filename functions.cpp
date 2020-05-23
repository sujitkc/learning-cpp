#include <iostream>

using namespace std;

int add(int x, int y) {
  return x + y;
}

// pure functions or mathematical functions
string string_mul(string s, int n) {
  string sum = "";
  for(int i = 0; i < n; i++) {
    sum += s;
  }
  return sum;
}

// impure functions, procedure
void print_n_times(string s, int n) {
  for(int i = 0; i < n; i++) {
    cout << s << endl; // side-effect/effect
  }
}

void banner(string msg) {
  int length = msg.size();
  string decorator = string_mul("*", length + 4);
  // a function can call another function to arbitrary depth.
  cout << decorator << endl;
  cout << "* " << msg << " *" << endl;
  cout << decorator << endl;
}

/*
Functional programming languages
ML family: Standard ML, OCaml, Haskell, F#
Lisp: Lisp, Scheme, Dr. Racket
Modern programming languages: Scala, Clojure
Python, Swift (Apple), Go, Rust, ...
*/
int factorial(int n) {
  cout << "n = "<< n << endl;
  if(n == 1) { // base condition
    return 1; // recursion bottoms out
  }
  int prod = factorial(n - 1); // continuation condition
  return n * prod;
}

void print_n_times_rec(string s, int n) {
  if(n == 0) {
    return;
  }
  else {
    cout << s << endl;
    print_n_times_rec(s, n - 1);
  }

}

int main() {
/*
  string name = "Sujit"; // not char *, char []
  name += " Chakrabarti";

  int sum = add(10, 20);
  cout << "sum = " << sum << endl;

  string s = string_mul("Ayan", 5);
  cout << s << endl;

  print_n_times("Ayan", 5);

  banner("Hello world!");
*/

  cout << factorial(5) << endl;
  print_n_times_rec("Ayan", 5);
  return 0;
}
