#include <cstdlib>
#include <time.h>
#include "ASCIIgenerator.h"

ASCIIgenerator::ASCIIgenerator(){
   srand(time(0));
}

ASCIIgenerator::~ASCIIgenerator(){
   random = rand();
}

char ASCIIgenerator::makeAny() {
   bool valid(false);

   random = rand()%90 + 33;
   while(!valid){
      if (random == 34)     // "
         random = rand()%90 + 33;
      else if(random == 39) // '
         random = rand()%90 + 33;
      else if(random == 40) // (
         random = rand()%90 + 33;
      else if(random == 41) // )
         random = rand()%90 + 33;
      else if(random == 43) // +
         random = rand()%90 + 33;
      else if(random == 44) // ,
         random = rand()%90 + 33;
      else if(random == 45) // -
         random = rand()%90 + 33;
      else if(random == 46) // .
         random = rand()%90 + 33;
      else if(random == 47) // /
         random = rand()%90 + 33;
      else if(random == 58) // :
         random = rand()%90 + 33;
      else if(random == 59) // ;
         random = rand()%90 + 33;
      else if(random == 60) // <
         random = rand()%90 + 33;
      else if(random == 61) // =
         random = rand()%90 + 33;
      else if(random == 62) // >
         random = rand()%90 + 33;
      else if(random == 91) // [
         random = rand()%90 + 33;
      else if(random == 92) // '\'
         random = rand()%90 + 33;
      else if(random == 93) // ]
         random = rand()%90 + 33;
      else if(random == 94) // ^
         random = rand()%90 + 33;
      else if(random == 95) // _
         random = rand()%90 + 33;
      else if(random == 96) // `
         random = rand()%90 + 33;

      else
         valid = true;
   }
   return (char)random;
   
   }

char ASCIIgenerator::makeAlpha(){
   int chance(rand()%2);
   if (chance) // gen lower
      random = rand()%26 + 97;
   else // gen upper
      random = rand()%26 + 65;
   return (char)random;
}

char ASCIIgenerator::makeUpper(){
   random = rand()%26 + 65;
   return (char)random;
}

char ASCIIgenerator::makeLower(){
   return (char)(rand()%26 + 97);
}

char ASCIIgenerator::makeSpecialChar(){
   random = rand() % 8;
   switch(random){
       case 0: return '!'; // !
       case 1: return '#'; // #
       case 2: return '$'; // $
       case 3: return '%'; // %
       case 4: return '&'; // &
       case 5: return '*'; // *
       case 6: return '?'; // ?
       case 7: return '@'; // @
   }
}



