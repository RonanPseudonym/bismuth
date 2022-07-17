FILES   = src/main.c
HEADERS = src/bml/main.h src/bml/fetch.h src/bml/pref.h
NAME    = bm
CC      = gcc
CFLAGS  = -Wall
BIN_P   = /usr/local/bin

$(NAME): $(FILES) $(HEADERS)
	$(CC) $(CFLAGS) $(FILES) -o $(NAME)

run: $(NAME)
	./$(NAME)

install: $(NAME)
	cp $(NAME) $(BIN_P)/
	chmod +x $(BIN_P)/$(NAME)
