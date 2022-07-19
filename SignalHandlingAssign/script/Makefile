CC = g++
LFLAGS = -o
CFLAGS = -c -g -Wall -Werror
INC = ./inc
IFLAG = -I$(INC)
BIN = ./bin
OBJ = ./obj
SRC = ./src

CVFLAGS = -v --tool=memcheck --leak-check=full --show-reachable=yes --log-file=valclient

all: SignalHandling

SignalHandling: $(OBJ)/SignalHandling.o
	$(CC) $(LFLAGS) $(BIN)/SignalHandling $(OBJ)/SignalHandling.o

$(OBJ)/SignalHandling.o: $(SRC)/SignalHandling.cpp
	$(CC) $(CFLAGS) $(IFLAG) $(SRC)/SignalHandling.cpp -o $(OBJ)/SignalHandling.o 
	mv *.o $(OBJ)


clean:
	@echo "Cleaning is in Progress"
	rm -f a.out SignalHandling
	rm -f *.o
	rm -f $(OBJ)/*.o
	rm -f $(BIN)/SignalHandling
	@echo "Done!"

valgrind:
	valgrind --leak-check=full $(BIN)/app
	mv valgrind $(BIN)


