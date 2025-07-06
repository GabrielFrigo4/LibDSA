BIN := bin
OBJ := obj

# Unix (MacOS, Linux, BSD)
build:
	mkdir -p $(BIN) $(OBJ)
	gcc -std=c23 -shared -Wl,--out-implib,$(BIN)/libdsa.a src/*/*.c -Iinclude -o $(BIN)/dsa.os

test:

install:

# Windows (MSYS2)
msbuild:
	mkdir -p $(BIN) $(OBJ)
	gcc -std=c23 -shared -Wl,--out-implib,$(BIN)/libdsa.lib src/*/*.c -Iinclude -o $(BIN)/dsa.dll

mstest:

msinstall:

# Utils
clear:
	rm -r -f $(BIN) $(OBJ)
