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
*/


#include <iostream>
using namespace std;


int main(){
  // cout function used to display output to the screen
  cout<<"Hello World"<<endl; // endl is a keyword the gives a line break.

  // cin function used to take input from the console
  int x;
  cin>>x;
  cout<<x<<endl;

  // cerr function used to output the error message
  cerr<< "A lot of errors "<<endl;

}
