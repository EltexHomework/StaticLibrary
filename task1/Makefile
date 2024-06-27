CC := gcc
CFLAGS := -Wall -Werror -O2

SRC_DIR := src
LIB_SRC_DIR := $(SRC_DIR)/lib
BIN_DIR := bin
LIB_NAME := libcalc.a

MAIN_OBJECT := $(BIN_DIR)/main.o
LIB_SOURCES := $(wildcard $(LIB_SRC_DIR)/*.c)
LIB_OBJECTS := $(patsubst $(LIB_SRC_DIR)/%.c, $(BIN_DIR)/%.o, $(LIB_SOURCES))

all: $(BIN_DIR) $(BIN_DIR)/$(LIB_NAME) $(BIN_DIR)/main

# Create bin folder 
$(BIN_DIR):
	@mkdir -p $@

# Compile lib files to object .o files in bin folder 
$(BIN_DIR)/%.o: $(LIB_SRC_DIR)/%.c
	@$(CC) $(CFLAGS) -c $< -o $@

# Build static lib from object files in bin folder 
$(BIN_DIR)/$(LIB_NAME): $(LIB_OBJECTS)
	@ar rcs $@ $^

# Compile main.c to object file
$(BIN_DIR)/main.o: $(SRC_DIR)/main.c
	@$(CC) $(CFLAGS) -c $< -o $@

# Link main.o to static lib in bin folder -L folder of lib -lcalc name of lib
$(BIN_DIR)/main: $(MAIN_OBJECT) $(BIN_DIR)/$(LIB_NAME)
	@$(CC) $(CFLAGS) $< -L$(BIN_DIR) -lcalc -o $@

# Clean bin folder
clean:
	@rm -rf $(BIN_DIR)

.PHONY: all clean

