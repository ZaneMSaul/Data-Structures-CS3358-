// FILE: ourStr.cpp
// CLASS IMPLEMENTED: ourStr (see ourStr.h for documentation)
// INVARIANT for the ourStr class:
//   1. Number of characters of the string represented by ourStr is in
//      member variable len.
//   2. For an empty string, we don't care what is stored in any of data;
//      for a non-empty string, the characters of the string (len of them,
//      from left to right) are stored in data[0] through data[len - 1]
//      and we don't care what's in the rest of data.

#include "ourStr.h"
#include <cassert>
using namespace std;

void ourStr::showStr(ostream& out) const
{
   for (int i = 0; i < len; ++i)
      out << data[i];
}

ourStr::ourStr() : len(1)
{
   data[0] = '^';
}

int ourStr::getLen() const { return len; }

char ourStr::charAt(int pos) const
{
   assert(pos >= 1);
   assert( pos <= getLen() );
   return data[pos - 1];
}

void ourStr::setStr(const char cStr[])
{
   len = 0;
   while (len < MAX_LEN && cStr[len] != '\0')
   {
       data[len] = cStr[len];
       ++len;
   }
}

void ourStr::setChar(int pos, char newChar)
{
   assert(pos >= 1);
   assert( pos <= getLen() + 1 );
   assert(pos <= MAX_LEN);
   data[pos - 1] = newChar;
   if (pos > len) ++len;
}

