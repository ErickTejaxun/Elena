#include <iostream>
#include <strstream>
#include <string>
#include "antlr4-runtime.h"
#include "ElenaLexer.h"
#include "ElenaParser.h"

class ParserErrorListener: public antlr4::BaseErrorListener 
{
  virtual void syntaxError(
      antlr4::Recognizer *recognizer,
      antlr4::Token *offendingSymbol,
      size_t line,
      size_t charPositionInLine,
      const std::string &msg,
      std::exception_ptr e) override {
    std::ostrstream s;
    s << "Line(" << line << ":" << charPositionInLine << ") Error(" << msg << ")";
    throw std::invalid_argument(s.str());
  }
};

int main(int argc, char *argv[]) 
{
  antlr4::ANTLRInputStream input(argv[1]);  // Establecemos nuestro argumento 1 como el flujo de entrada.
  ElenaLexer lexer(&input);                 // Instanciamos nuestro lexer.
  antlr4::CommonTokenStream tokens(&lexer); // Creamos un flujo de tokens.

  ParserErrorListener errorListner;       // Instanciamos un manejador propio de erroes.

  tokens.fill();                            // Llenamos nuestro flujo de tokens.
  
  //Imprimos en pantalla nuestro flujo de tokens.
  for (auto token : tokens.getTokens()) 
  {
    std::cout << token->toString() << std::endl;
  }
  
  ElenaParser parser(&tokens);
  parser.removeErrorListeners();
  parser.addErrorListener(&errorListner);
  try 
  {
    antlr4::tree::ParseTree* tree = parser.main();  // Creamos un arbol desde nuestro parser.
    std::cout << tree->toStringTree() << std::endl;
    return 0;
  }catch (std::invalid_argument &e) 
  {
    std::cout << e.what() << std::endl;
    return 10;
  }
}