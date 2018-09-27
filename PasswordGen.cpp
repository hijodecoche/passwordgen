#include <cstdlib>
#include <cctype>
#include <iostream>
#include "PasswordGen.h"
PasswordGenerator::PasswordGenerator() : password(""){
   srand(time(0));
}

PasswordGenerator::~PasswordGenerator(){

   for(uint i(0); i < password.length(); ++i)
      password[i] = 0;
   // erase characters
}

/* selectType()
 * @return character of determined type
 */
char PasswordGenerator::generate(){
   unsigned short select(rand()%7);
   if(select < 4)
      return charGen.makeAlpha();
   else if (select == 4)
      return charGen.makeSpecialChar();
   else
      return charGen.makeNumeric();
}

std::string PasswordGenerator::buildString(const uint& length){

   password.clear();

   for(uint i(0); i < length; ++i){
      password.push_back(generate());
   }

   return password;
}

#ifdef TEST
void PasswordGenerator::printStats(){
   uint numeric(0), upper(0), lower(0), special(0);

   for(uint i(0); i < password.length(); ++i){
      if(isupper(password[i]))
         ++upper;
      else if (islower(password[i]))
         ++lower;
      else if (isdigit(password[i]))
         ++numeric;
      else
         ++special;
   }
   std::cout <<"\tUppercase:\t" << upper
             <<"\n\tLowercase:\t" << lower
             <<"\n\tNumeric:\t" << numeric
             <<"\n\tSpecial Char:\t" << special
             << std::endl;
}
#endif

