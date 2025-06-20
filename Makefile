BIN := bin
OBJ := obj

build:
	mkdir -p $(BIN) $(OBJ)
	gcc -std=c23 -shared -Wl,--out-implib,$(BIN)/libdsa.a src/*/*.c -Iinclude -o $(BIN)/dsa.dll

test:

install:

clear:
	rm -r -f $(BIN) $(OBJ)