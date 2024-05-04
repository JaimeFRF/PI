#include "CodeGenerator.h"
#include <unordered_map>
#include <tuple>
#include <string>
enum dsl_type {DslImg, DslString, DslImgArray};


class DslSemantic {
    private:
        std::unordered_map<std::string, std::tuple<dsl_type, int>> symbolTable;
    public:
        void updateSymbolTable(std::string varId, std::tuple<dsl_type, int> value);
        std::unordered_map<std::string, std::tuple<dsl_type, int>> getSymbolTable();
        int getArraySize(std::string varId);
        void undeclaredVariable(std::string varId);
        void wrongVarType(std::string varId, dsl_type desiredType);
        std::string evaluateOperation(myDslParser::OperationContext *ctx);
        std::string evaluateLoop(std::string arrayId, myDslParser::OperationTypeContext *op, myDslParser::ImageManipulationTypeContext *imgOp, myDslParser::ShowContext *showOp, std::tuple<bool, std::string> fromAssignment);
};
