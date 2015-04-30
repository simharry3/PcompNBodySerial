OBJS = nBody.o simulation.o system.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -std=c++11 -c $(DEBUG)
LFLAGS = -Wall -std=c++11 $(DEBUG)

test : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o test.out

nBody.o : nBody.h nBody.cpp
	$(CC) $(CFLAGS) nBody.cpp

simulation.o : simulation.cpp nBody.h system.h
	$(CC) $(CFLAGS) simulation.cpp

system.o : system.h system.cpp
	$(CC) $(CFLAGS) system.cpp