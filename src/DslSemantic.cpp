#include "..//headers//DslSemantic.h"

using namespace std;

void DslSemantic::updateSymbolTable(std::string varId, std::tuple<dsl_type, int> value) {
    symbolTable[varId] = value;
}

unordered_map<std::string, std::tuple<dsl_type, int>> DslSemantic::getSymbolTable(){
    return symbolTable;
}

void DslSemantic::undeclaredVariable(string varId){
    if(symbolTable.find(varId) == symbolTable.end()){
        throw std::runtime_error("Semantic Analysis Error: Variable " + varId + " not found in symbol table");
    }
}

void DslSemantic::wrongVarType(string varId, dsl_type desiredType){
    auto tuple_value = symbolTable[varId];
    dsl_type curr_type = std::get<0>(tuple_value);

    if(curr_type != desiredType){
        throw std::runtime_error("Semantic Analysis Error: Wrong types");
    }
}

string DslSemantic::evaluateOperation(myDslParser::OperationContext *ctx){
    string result = "";
    myDslParser::OperationTypeContext *op = ctx->operationType();
    myDslParser::ImageManipulationTypeContext *imgOp = ctx->imageManipulationType();

    if (ctx->VARIABLE()) {
        try{
            string variable = ctx->VARIABLE()->getText();

            undeclaredVariable(variable);
            wrongVarType(variable, DslImg);
            
            result = CodeGenerator::performOperation(variable, op, imgOp, variable);
            return result;
        }catch(const std::runtime_error& e){
            std::cerr << e.what() << std::endl;
            exit(1);
        }
    } 
    else if (ctx->operation()) {
        string oldOp = evaluateOperation(ctx->operation());
        result = CodeGenerator::performOperation(oldOp, op, imgOp, oldOp);
        return result;
    }
    else if(ctx->arrayElement()){
        string variable = ctx->arrayElement()->VARIABLE()->getText();
        std::ostringstream oss;
        oss << variable << "[" << ctx->arrayElement()->INT()->getText() << "]";
        result = oss.str();

        string result_final = CodeGenerator::performOperation(result, op, imgOp, result);
        return result_final;
    }
    return result;
}

string DslSemantic::evaluateLoop(std::string arrayId, myDslParser::OperationTypeContext *op, myDslParser::ImageManipulationTypeContext *imgOp, myDslParser::ShowContext *showOp, std::tuple<bool, std::string> fromAssignment){
    try{
        undeclaredVariable(arrayId);
        wrongVarType(arrayId, DslImgArray);
    }catch(const std::runtime_error& e){
        std::cerr << e.what() << std::endl;
        exit(1);
    }


    std::ostringstream oss;
    oss << "for(auto* img : " << arrayId << "){";    

    if(showOp){
        oss << "img->showImage();";
    }else{
        string result = CodeGenerator::performOperation("img", op, imgOp, "img");
        if(get<0>(fromAssignment)){
            oss << get<1>(fromAssignment) << ".push_back(" << result << ");";
        }else{
            oss << result << ";";        
        }
    }
    oss << "}";

    return oss.str();
}

