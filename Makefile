
JAVA=/usr/bin/java
OUTPUT=output
GENERATED=generated
GRAMMAR=myDsl.g4

OPENCV_INCLUDE_DIR = /usr/include/opencv4
TESSERACT_INCLUDE_DIR = /usr/include/tesseract
LEPTONICA_INCLUDE_DIR = /usr/include/leptonica
INCLUDES = -I$(OPENCV_INCLUDE_DIR) -I$(TESSERACT_INCLUDE_DIR) -I$(LEPTONICA_INCLUDE_DIR)



RUNTIME=runtime-linux
CC=g++
CCARGS=-c -I $(RUNTIME)/antlr4-runtime/ -I $(GENERATED) $(INCLUDES) -std=c++17
LDARGS=-g
LIBS=$(RUNTIME)/lib/libantlr4-runtime.a -lopencv_core -lopencv_imgproc -lopencv_highgui -lopencv_imgcodecs -ltesseract -llept

all: main

main: dirs antlr4 main.cpp
	$(CC) $(CCARGS) main.cpp  -o $(OUTPUT)/main 
	$(CC) $(CCARGS) ./src/myListener.cpp  -o $(OUTPUT)/myListener.o 
	$(CC) $(CCARGS) ./src/DslSemantic.cpp  -o $(OUTPUT)/myDslSemantic.o 
	$(CC) $(CCARGS) ./src/ImageProcessingDsl.cpp  -o $(OUTPUT)/ImageProcessingDsl.o 
	$(CC) $(CCARGS) ./src/CodeGenerator.cpp  -o $(OUTPUT)/CodeGenerator.o 
	$(CC) $(CCARGS) $(GENERATED)/myDslBaseListener.cpp -o $(OUTPUT)/myDslBaseListener.o 
	$(CC) $(CCARGS) $(GENERATED)/myDslLexer.cpp -o $(OUTPUT)/myDslLexer.o 
	$(CC) $(CCARGS) $(GENERATED)/myDslListener.cpp -o $(OUTPUT)/myDslListener.o 
	$(CC) $(CCARGS) $(GENERATED)/myDslParser.cpp -o $(OUTPUT)/myDslParser.o 
	$(CC) $(LDARGS) $(OUTPUT)/main $(OUTPUT)/myDslSemantic.o $(OUTPUT)/myListener.o $(OUTPUT)/ImageProcessingDsl.o $(OUTPUT)/CodeGenerator.o $(OUTPUT)/myDslBaseListener.o $(OUTPUT)/myDslLexer.o $(OUTPUT)/myDslListener.o $(OUTPUT)/myDslParser.o $(LIBS) -o main

antlr4: $(GRAMMAR)
	$(JAVA) -jar antlr-4.13.1-complete.jar -Dlanguage=Cpp -o $(GENERATED) $(GRAMMAR)

dirs:
	mkdir -p $(OUTPUT) 
	mkdir -p $(GENERATED) 

clean:
	rm -rf $(OUTPUT)
	rm -rf $(GENERATED)
	rm -rf temp_code.cpp
	rm -rf temp_executable
	rm -rf main
