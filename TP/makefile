# Variáveis
CC = gcc
CFLAGS = -Wall -Iinclude
SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin
INCLUDE_DIR = include

# Arquivos fonte e objetos
SOURCES = $(wildcard $(SRC_DIR)/*.c)
OBJECTS = $(SOURCES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

# Nome do executável
EXEC = $(BIN_DIR)/matop

# Alvos principais
all: $(EXEC)

# Criação do executável
$(EXEC): $(OBJECTS) | $(BIN_DIR)
	$(CC) $(CFLAGS) -o $@ $(OBJECTS)

# Compilação dos arquivos .c em .o
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Diretórios bin e obj
$(BIN_DIR):
	mkdir -p $(BIN_DIR)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# Limpeza dos arquivos compilados
clean:
	rm -rf $(OBJ_DIR)/*.o $(BIN_DIR)/matop

# Comando run para testar o programa
run: all
	./$(EXEC) -s -x 5 -y 5
	./$(EXEC) -m -x 5 -y 5
	./$(EXEC) -t -x 5 -y 5
