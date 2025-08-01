CC = gcc
CFLAGS = -Iinclude -Wall -Werror
SRC = src/bit_ops.c
TEST = tests/test_bit_ops.c
OUT = bin/test_bit_ops

all: $(OUT)

$(OUT): $(SRC) $(TEST)
	@mkdir -p bin
	$(CC) $(CFLAGS) -o $(OUT) $(SRC) $(TEST)

clean:
	rm -rf bin
