// FILE: ourStr.h
// CLASS PROVIDED: ourStr
//
// MEMBER CONSTANT for the ourStr class:
//   static const int MAX_LEN = _______
//     ourStr::MAX_LEN is the maximum number of characters an ourStr can hold.
//

#ifndef OUR_STR_H
#define OUR_STR_H

class ourStr
{
public:
   static const int MAX_LEN = 5;
private:
   char data[MAX_LEN];
   int len;
};

#endif
