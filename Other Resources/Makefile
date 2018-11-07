NAME = assign01Exe
CC = g++
DEP = assign01App.o assign01Imp.o
OBJ = $(DEP)
CFLAGS = -Wall -ansi -pedantic

$(NAME): $(DEP)
	$(CC) $(OBJ) -o $(NAME)
assign01App.o: assign01App.cpp assign01Int.h
	$(CC) $(CFLAGS) -c assign01App.cpp
assign01Imp.o: assign01Imp.cpp assign01Int.h
	$(CC) $(CFLAGS) -c assign01Imp.cpp

clean:
	@rm -rf $(OBJ)
cleanall:
	@rm -rf $(OBJ) $(NAME)
