CC = g++
LFLAGS = -o
CFLAGS = -c -g -Wall -Werror
INC = ./inc
IFLAG = -I$(INC)
BIN = ./bin
OBJ = ./obj
SRC = ./src

CVFLAGS = -v --tool=memcheck --leak-check=full --show-reachable=yes --log-file=valclient

all: main.cpp

main.cpp: $(OBJ)/main.o
	$(CC) $(LFLAGS) $(BIN)/main.cpp $(OBJ)/main.o

$(OBJ)/main.o: $(SRC)/main.cpp
	$(CC) $(CFLAGS) $(IFLAG) $(SRC)/main.cpp 
	mv *.o $(OBJ)


clean:
	@echo "Cleaning is in Progress"
	rm -f a.out main.cpp
	rm -f *.o
	rm -f $(OBJ)/*.o
	rm -f $(BIN)/main
	@echo "Done!"

valgrind:
	valgrind --leak-check=full $(BIN)
	mv valgrind $(BIN)

