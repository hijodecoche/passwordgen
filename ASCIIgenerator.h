#ifndef ASCII_GENERATOR_
#define ASCII_GENERATOR_

/* @file ASCIIgenerator
 *
 * randomly generates and returns an ASCII character
 */

class ASCIIgenerator {

  private:
   int random;

  public:
   ASCIIgenerator(); // seeds generator
   ~ASCIIgenerator(); // write over old generation in memory
   char makeAny(); // generate and return random number
                 // only outputs valid char ASCII values

   char makeNumeric();

   char makeAlpha(); // upper or lowercase alpha char

   char makeUpper();

   char makeLower();

   char makeSpecialChar(); // valid: ! @ # $ % & * ?
};

#endif
