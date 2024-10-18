# Compiler and flags
CC = gcc
CFLAGS = -I../include

# Directories
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

# Rule to build target from lib module(s)
LIBS = $(LIB_DIR)/primes.o
$(TARGET): main.c $(LIBS)
	$(CC) $(CFLAGS) -o $@ $< $(LIBS)

# Rule(s) to compile module from dependencies
$(LIB_DIR)/primes.o: primes.c
	$(CC) $(CFLAGS) -o $@ -c $<

# Clean rule: remove object files and binaries
clean:
	rm -f $(LIB_DIR)/*.o $(BIN_DIR)/*.exe

# Phony targets (targets that aren't actual files)
.PHONY: all clean
