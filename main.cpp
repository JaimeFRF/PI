#include <iostream>
#include <fstream>          
#include "antlr4-runtime.h" 
#include "myDslLexer.h"     
#include "myDslParser.h"        
#include "../generated/myDslBaseListener.h"
#include "..//headers//myListener.h"

using namespace ImageProcessingDsl;
using namespace antlr4;
using namespace std;

int main(){

    Dsl dsl;

    ifstream inputFile ("input.txt");            
    ANTLRInputStream input(inputFile);          

    myDslLexer lexer(&input);                   
    CommonTokenStream tokens(&lexer);           
                                                
    myDslParser parser(&tokens);                
    myDslParser::DslContext* tree = parser.dsl(); 
                                                
    MyListener listener;
    antlr4::tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);


    return 0;
}