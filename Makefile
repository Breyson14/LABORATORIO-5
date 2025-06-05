CC = gcc
CFLAGS = -I./src -Wall -g
LDFLAGS = -lcjson

SRC = $(wildcard src/*.c)
OBJ = $(SRC:.c=.o)
EXEC = LABO5

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXEC)

