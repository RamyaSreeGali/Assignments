CC = g++
INC = ./inc
OBJ = ./obj
SRC = ./src
BIN = ./bin

CFLAGS = -c -g -Wall -Werror
LFLAGS = -o
IFLAGS = -I$(INC)
CVFLAGS = -v --tool=memcheck --leak-check=full --show-reachable=yes --log-file=valclient

all: $(BIN)/app
	$(BIN)/app: $(OBJ)/test.o
	        $(CC) $(LFLAGS) $(BIN)/app $(OBJ)/test.o

$(OBJ)/test.o:$(SRC)/employee.cpp
	        $(CC) $(CFLAGS) $(IFLAGS) $(SRC)/employee.cpp -o $(OBJ)/test.o

clean:
	@echo "Cleaning the Project
	rm -f $(OBJ)/*.o
	rm -f a.out
	rm -f $(BIN)/app
valgrind:
	valgrind --leak-check=full $(BIN)/app
	<F2>mv valgrind $(BIN)

