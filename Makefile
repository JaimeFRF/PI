
JAVA=/usr/bin/java
OUTPUT=output
GENERATED=generated
GRAMMAR=myDsl.g4

OPENCV_INCLUDE_DIR = /usr/include/opencv4
INCLUDES = -I$(OPENCV_INCLUDE_DIR)


RUNTIME=runtime-linux
CC=g++
CCARGS=-c -I $(RUNTIME)/antlr4-runtime/ -I $(GENERATED) $(INCLUDES) -std=c++17
LDARGS=-g
LIBS=$(RUNTIME)/lib/libantlr4-runtime.a -lopencv_core -lopencv_imgproc -lopencv_highgui -lopencv_imgcodecs

all: hello

hello: dirs antlr4 hello.cpp
	$(CC) $(CCARGS) hello.cpp  -o $(OUTPUT)/hello 
	$(CC) $(CCARGS) $(GENERATED)/myDslBaseListener.cpp -o $(OUTPUT)/myDslBaseListener.o 
	$(CC) $(CCARGS) $(GENERATED)/myDslLexer.cpp -o $(OUTPUT)/myDslLexer.o 
	$(CC) $(CCARGS) $(GENERATED)/myDslListener.cpp -o $(OUTPUT)/myDslListener.o 
	$(CC) $(CCARGS) $(GENERATED)/myDslParser.cpp -o $(OUTPUT)/myDslParser.o 
	$(CC) $(LDARGS) $(OUTPUT)/hello $(OUTPUT)/myDslBaseListener.o $(OUTPUT)/myDslLexer.o $(OUTPUT)/myDslListener.o $(OUTPUT)/myDslParser.o $(LIBS) -o hello

antlr4: $(GRAMMAR)
	$(JAVA) -jar antlr-4.13.1-complete.jar -Dlanguage=Cpp -o $(GENERATED) $(GRAMMAR)

dirs:
	mkdir -p $(OUTPUT) 
	mkdir -p $(GENERATED) 

clean:
	rm -rf $(OUTPUT)
	rm -rf $(GENERATED)
