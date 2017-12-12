# http://pirate.shu.edu/~minimair/assembler/Makefile
#
all: main

word.o : word.cpp
	@g++ -c word.cpp

concordance.o : concordance.cpp
	@g++ -c concordance.cpp

main : word.o concordance.o main.cpp
	@g++ -o main word.o concordance.o main.cpp

run :  main
	@./main


clean :
	@rm *.o  main
