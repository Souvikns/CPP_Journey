/*
  header files for i/o
  - iostream
  - iomanip
  - fstream
*/

/*
  1: standard output stream
     The C++ cout statement is the instance of the
     ostream class.
     It is used to produce output on the standard
     output device which is usually the display screen.

  2: standard input stream
     C++ cin statement is the instance of the class
     istream and is used to read input from the
     standard input device which is usually
     a keyboard.

  3: un-buffered standard error stream
     The c++ cerr is the standard error stream
     which is used to output the errors.
     This is also an instance of the ostream class.

  4: buffered standard error stream
     This is also an instance of iostream class
     and is used to show error messages but unlike cerr
     the error is first inserted into a buffer and is stored
     in the buffer until it is not fully filled.
     The error message will be displayed to screen too.
*/

#include <iostream>
using namespace std;

int main() {
  // cout function used to display output to the screen
  cout << "Hello World" << endl; // endl is a keyword the gives a line break.

  // cin function used to take input from the console
  int x;
  cin >> x;
  cout << x << endl;

  // cerr function used to output the error message
  cerr << "A lot of errors " << endl;

  // clog fucntion used to output the error message
  // but it first stores the message inside a buffer
  clog << "More Errors" << endl;
}
