# Compiler
CC = gcc

# Directories
INCLUDES=../include
LIB_DIR =../lib
BIN_DIR =../bin

# Executable
TARGET = $(BIN_DIR)/program

all: $(LIB_DIR) $(BIN_DIR) $(TARGET)

# Rule to create the lib directory if it doesn't exist
$(LIB_DIR):
	@mkdir -p $(LIB_DIR)

# Rule to create the bin directory if it doesn't exist
$(BIN_DIR):
	@mkdir -p $(BIN_DIR)

# Rule to build target 
$(TARGET): main.c $(LIB_DIR)/primes.o
	$(CC) -I$(INCLUDES) -o $@ $< $(LIB_DIR)/primes.o

# Rule(s) to build module(S)
$(LIB_DIR)/primes.o: primes.c
	$(CC) -I$(INCLUDES) -o $@ -c $<

# Clean rule: remove object files and binaries
clean:
	rm -rf $(LIB_DIR) $(BIN_DIR)

# Phony targets (targets that aren't actual files)
.PHONY: all clean
