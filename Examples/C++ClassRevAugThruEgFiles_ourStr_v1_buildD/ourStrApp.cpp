// FILE: ourStrApp.cpp
// A program to test the ourStr class

#include "ourStr.h"
#include <cstdlib>
#include <iostream>
using namespace std;

void ShowStrSpaced(ostream& out, const ourStr& s);

int main()
{
   cout << "ourStr::MAX_LEN = " << ourStr::MAX_LEN << endl;

   ourStr s1;
   s1.showStr(cout);
   cout << endl;
   s1.setStr("San Marcos");
   s1.showStr(cout);
   cout << endl;
   ShowStrSpaced(cout, s1);
   cout << endl;
   s1.setChar(1, 's');
   s1.setChar(5, 'm');
   // s1.setChar(6, 'm'); // to trigger an assertion failure
   s1.showStr(cout);
   cout << endl;
   s1.setStr("");
   s1.showStr(cout);
   cout << endl;
   ShowStrSpaced(cout, s1);
   cout << endl;
   s1.setStr("SM");
   s1.showStr(cout);
   cout << endl;
   ShowStrSpaced(cout, s1);
   cout << endl;
   cout << "length is " << s1.getLen() << endl;

   return EXIT_SUCCESS;
}

void ShowStrSpaced(ostream& out, const ourStr& s)
{
   int sLen = s.getLen();
   for (int p = 1; p <= sLen; ++p)
      out << s.charAt(p) << "  ";
}
