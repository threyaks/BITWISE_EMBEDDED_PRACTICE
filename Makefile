CC = gcc
CFLAGS = -Wall -Werror -Iinclude

SRC = src/bit_ops.c
TEST_SRC = tests/test_bit_ops.c
KERNIGHAN_SRC = src/brian_kernighan.c

BIN_DIR = bin
TEST_EXE = $(BIN_DIR)/test_bit_ops
KERNIGHAN_EXE = $(BIN_DIR)/brian_kernighan

all: $(TEST_EXE) $(KERNIGHAN_EXE)

$(TEST_EXE): $(SRC) $(TEST_SRC)
	$(CC) $(CFLAGS) -o $@ $^

$(KERNIGHAN_EXE): $(SRC) $(KERNIGHAN_SRC)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(BIN_DIR)/*
