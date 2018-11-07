// FILE: ourStrApp.cpp
// A program to test the ourStr class

#include "ourStr.h"
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
   cout << "ourStr::MAX_LEN = " << ourStr::MAX_LEN << endl;

   ourStr s1;
   s1.showStr(cout);
   cout << endl;

   return EXIT_SUCCESS;
}
