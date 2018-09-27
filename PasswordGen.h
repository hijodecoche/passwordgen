
#define TEST
#ifndef PASSWORD_GENERATOR_
#define PASSWORD_GENERATOR_
#include "ASCIIgenerator.h"
#include <string>

class PasswordGenerator {

  private:
   ASCIIgenerator charGen;
   std::string password;

  public:
   PasswordGenerator();
   ~PasswordGenerator();
   char generate();
   std::string buildString_uncontrolled(const unsigned int& length);
   std::string buildString(const uint& length);
   #ifdef TEST
   void printStats();
   #endif
};

#endif
