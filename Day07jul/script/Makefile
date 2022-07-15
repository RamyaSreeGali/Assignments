CC = g++
INC = ./inc
OBJ = ./obj
SRC = ./src
BIN = ./bin

CFLAGS = -c -g -Wall -Werror
LFLAGS = -o
IFLAGS = -I$(INC)
CVFLAGS = -v --tool=memcheck --leak-check=full --show-reachable=yes --log-file=valclient

all: $(BIN)/app valgrind

$(BIN)/app:
	                $(CC) $(LFLAGS) $(BIN)/app $(OBJ)
			
			$(OBJ)/sysPrg.cpp:$(SRC)/sysPrg.cpp
	                
			$(CC) $(CFLAGS) $(IFLAGS) $(SRC)/sysPrg.cpp -o $(OBJ)/sysPrg.cpp


clean:
	@echo "Cleaning the Project"
	rm -f $(OBJ)
	rm -f a.out
	rm -f $(BIN)/app
	valgrind:
	valgrind --leak-check=full $(BIN)/app
	mv valgrind $(BIN)

