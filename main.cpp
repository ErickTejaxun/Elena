#include <iostream>
#include "antlr4-runtime.h"
#include "ElenaParser.h"
#include "ElenaLexer.h"


using namespace ElenaCompiler;
using namespace Elena;

int main()
{
    ANTLRInputStrem input(u8"1+2");
    ElenaLexer lexer(%input);
    CommonTokenStream tokens(&lexer);

    tokens.fill();
    for(auto token: tokens.getTokens())
    {
        std::cout << token->toString() << std::endl;
    }

    ElenaParser parser(&lexer);
    tree::ParserTree* tree = parser.main();

    std::cout << tree->toStringTree(&parser) << std::endl << std:endl;
    
    return 0;
}