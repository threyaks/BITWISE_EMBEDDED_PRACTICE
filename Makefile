# Compiler and flags
CC = gcc
CFLAGS = -Wall -Werror -Iinclude

# Source and test files
SRC = $(wildcard src/*.c)
TEST = $(wildcard tests/*.c)

# Output binary
OUT_DIR = bin
OUT = $(OUT_DIR)/test_bit_ops

# Default target
all: $(OUT)

# Build rule
$(OUT): $(SRC) $(TEST)
	@mkdir -p $(OUT_DIR)
	$(CC) $(CFLAGS) -o $@ $^

# Run the executable
run: $(OUT)
	./$(OUT)

# Clean build artifacts
clean:
	rm -rf $(OUT_DIR)
