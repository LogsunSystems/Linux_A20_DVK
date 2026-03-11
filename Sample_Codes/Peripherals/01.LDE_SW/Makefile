# 1. Automatically get the name of the current folder
TARGET := $(shell basename $(CURDIR))

# 2. Compiler and settings
CC = gcc
CFLAGS = -Wall -O2
LIBS = -lgpiod

# 3. Source files (assumes your file is named main.c)
SRC = main.c
OBJ = $(SRC:.c=.o)

# Default rule
all: $(TARGET)

# Link the executable
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ) $(LIBS)

# Compile source to object file
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Run the specific peripheral test
run: $(TARGET)
	sudo ./$(TARGET)

# Clean up
clean:
	rm -f $(TARGET) *.o

.PHONY: all run clean