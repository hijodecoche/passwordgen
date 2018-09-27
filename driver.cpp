#define TEST
#include <iostream>
#include <string>
#include "PasswordGen.h"

int main(){

   PasswordGenerator passGen;
   uint length;

   std::cout <<"Enter length of string: ";
   std::cin >> length;

   std::cout << "\n\t"  << passGen.buildString(length)
             << std::endl << std::endl;
#ifdef TEST
   passGen.printStats();
#endif

   return 0;
}
