// FILE: ourStr.h
// CLASS PROVIDED: ourStr
//
// MEMBER CONSTANT for the ourStr class:
//   static const int MAX_LEN = _______
//     ourStr::MAX_LEN is the maximum number of characters an ourStr can hold.
//
// CONSTRUCTOR for the ourStr class:
//   ourStr()
//     pre:  (none)
//     post: The ourStr has been initialized to a 1-character string containing
//           the character '^'.
//
// CONSTANT MEMBER FUNCTIONS (ACCESSORS) for the ourStr class:
//   void showStr(std::ostream& out) const
//     pre:  (none)
//     post: The characters in the ourStr have been written to out.
//     NOTE: No newline is inserted at the end.
//

#ifndef OUR_STR_H
#define OUR_STR_H

#include <iostream>

class ourStr
{
public:
   static const int MAX_LEN = 5;
   ourStr();
   void showStr(std::ostream& out) const;

private:
   char data[MAX_LEN];
   int len;
};

#endif
