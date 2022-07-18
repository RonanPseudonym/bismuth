FILES   = src/main.c src/ui/io.c
HEADERS = src/ui/io.h
NAME    = bm
CC      = gcc
CFLAGS  = -Wall -Wextra -pedantic
BIN_P   = /usr/local/bin

$(NAME): $(FILES) $(HEADERS)
	$(CC) $(CFLAGS) $(FILES) -o $(NAME)

run: $(NAME)
	./$(NAME)

install: $(NAME)
	cp $(NAME) $(BIN_P)/
	chmod +x $(BIN_P)/$(NAME)
