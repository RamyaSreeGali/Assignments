CC = g++
LFLAGS = -o
CFLAGS = -c -g -Wall -Werror
INC = ./inc
IFLAG = -I$(INC)
BIN = ./bin
OBJ = ./obj
SRC = ./src
        
all: multi
	  
multi:$(OBJ)/multi.o
	$(CC) $(LFLAGS) $(BIN)/multi $(OBJ)/multi.o
		  
$(OBJ)/multi.o: $(SRC)/multi.cpp
	$(CC) $(CFLAGS) $(IFLAG) $(SRC)/multi.cpp
	mv *.o $(OBJ)
			        
clean:
	@echo "Cleaning is in Progress"
	rm -f a.out multi
	rm -f *.o
	rm -f $(OBJ)/*.o
	rm -f $(BIN)/multi
	@echo "Done!"


