#include <iostream>
#include <string>

enum
{
  tok_eof = -1, // Fin del archivo EOF

  //Primitives
  tok_int = -2,
  tok_decimal = -3,
  tok_string = -4, 
  tok_boolean = -5,
  tok_char = -6,
  tok_identifier = -7,


  // Arithmetic operators
  tok_add = -100,   // +
  tok_minus = -101, // -
  tok_plus = -102,  // /*
  tok_div = -103,   // / 
  tok_pow = -104,   // ^
  tok_sqrt = -105,  // ~
  tok_lpar = -106,  // (
  tok_rpar = -107,  // ) 

  // Logic operators
  tok_equal = -108,   //==
  tok_noequal = -109, //!=  
  tok_greaterthan = -110,   // >
  tok_lessthan  = -111,   //  <
  tok_greaterequal = -112, // >=
  tok_lessequal = -113,  // <=
  
  // Boolean operators
  tok_and = -114, // '&&'
  tok_or = -115,  // '||'

  // reserved words
  tok_print = -116, // 'print'

  // types 
  tok_typeInt = -117, // int
  tok_type

};

static std::string IdentifierStr; 
static int IntVal;
static double NumVal;
static bool BoolVal;
static std::string StringVal;
static char CharVal;


// Lexer code
static int gettock()
{
  static int LastChar = ' ';

  // Skip any whitespace. 
  while(isspace(LastChar))
  {
    LastChar = getchar();
  }

  if(isalpha(LastChar))
  {
    IdentifierStr = LastChar;
    while(isalnum((LastChar = getchar())))
    {
      IdentifierStr += LastChar;
    }

    if(IdentifierStr == "")
    {

    }
  }
}




int main(int argc, char *argv[]) 
{
  std::runtime_error("Alert!");
  std::cout << "Starting development Elena language"<< std::endl;  
}