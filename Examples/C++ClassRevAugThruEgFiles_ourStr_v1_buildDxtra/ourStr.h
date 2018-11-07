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
//   int getLen() const
//     pre:  (none)
//     post: The return value is the total number of characters in the ourStr.
//
//   char charAt(int pos) const
//     pre:  pos >= 1 && pos <= getLen()
//     post: The return value is the character at position pos of the ourStr.
//     NOTE: 1st character is @ position 1, 2nd character is @ position 2, ...
//
//   void showStr(std::ostream& out) const
//     pre:  (none)
//     post: The characters in the ourStr have been written to out.
//     NOTE: No newline is inserted at the end.
/*///
     ourStr concat(const ourStr& followStr) const
     pre:  getLen() + followStr.getLen() <= MAX_LEN
     post: An ourStr representing the concatenation of the invoking ourStr and
           followStr is returned.
*///
//
// MODIFICATION MEMBER FUNCTIONS (MUTATORS) for the ourStr class:
//   void setStr(const char cStr[])
//     pre:  cStr is a C-string (null-terminated)
//     post: The ourStr has been set to represent a string equivalent to cStr,
//           but if cStr contains more than MAX_LEN characters then the ourStr
//           is set to represent only the first MAX_LEN characters of cStr.
//
//   void setChar(int pos, char newChar)
//     pre:  pos >= 1 && pos <= getLen() + 1 && pos <= MAX_LEN
//     post: The character at position pos has been set to newChar and len
//           has been set to pos if pos == ( getLen() + 1 ) initially.
//     NOTE: 1st character is @ position 1, 2nd character is @ position 2, ...
//

#ifndef OUR_STR_H
#define OUR_STR_H

#include <iostream>

class ourStr
{
public:
   static const int MAX_LEN = 5;
   ourStr();
   int getLen() const;
   char charAt(int pos) const;
   void showStr(std::ostream& out) const;
   /*///
   ourStr concat(const ourStr& followStr) const;
   *///
   void setStr(const char cStr[]);
   void setChar(int pos, char newChar);

private:
   char data[MAX_LEN];
   int len;
};

#endif
