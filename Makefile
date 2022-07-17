FILES   = src/main.c
HEADERS = src/bml/main.h 
NAME    = bm
CC      = gcc
CFLAGS  = -Wall

$(NAME): $(FILES) $(HEADERS)
	$(CC) $(CFLAGS) $(FILES) -o $(NAME)

run: $(NAME)
	./$(NAME)
