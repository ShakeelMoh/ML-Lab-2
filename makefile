#My own makefile for ML lab 2

#Declare variables
CC=g++
LIBS=-lm

#First create ".exe" called finds
finds: FindS.o
	$(CC) FindS.o -o finds $(LIBS)

#Need to make Audio.o file though
FindS.o: FindS.cpp
	$(CC) -c FindS.cpp


#Other rules

#Clean .o and exe
clean:
	@rm -f *.o
	@rm -f finds

#To run program
run:
	./finds
