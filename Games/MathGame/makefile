# leads comments in a line 
# Build all: default target
all: MathGame

# Separate compilation to build object files
cMathGame.o: cMathGame.c AdditionGame.h SubtractionGame.h 
	g++ -c -ggdb cMathGame.c

AdditionGame.o: AdditionGame.c AdditionGame.h 
	g++ -c -ggdb AdditionGame.c

SubtractionGame.o: SubtractionGame.c SubtractionGame.h
	g++ -c -ggdb SubtractionGame.c	

MathGameHelperFunctions.o: MathGameHelperFunctions.c MathGameHelperFunctions.h
	g++ -c -ggdb MathGameHelperFunctions.c

MultiplicationGame.o: MultiplicationGame.c MultiplicationGame.h
	g++ -c -ggdb MultiplicationGame.c

DivisionGame.o: DivisionGame.c DivisionGame.h
	g++ -c -ggdb DivisionGame.c

# linking
#demo is a target which depends upon main.o and greet.o 
#"g++ main.o greet.o -o demo" is the command to produce the executable file
#You need to use a TAB before g++ 
MathGame: cMathGame.o AdditionGame.o SubtractionGame.o MathGameHelperFunctions.o MultiplicationGame.o DivisionGame.o
	g++ cMathGame.o AdditionGame.o SubtractionGame.o MathGameHelperFunctions.o MultiplicationGame.o DivisionGame.o -o MathGame

# Testing
check: all
	./MathGame

# Clean up all build targets so that one may get a clean build
clean:
	rm -f *.o MathGame