WASM_DIR = ../website/wasm/
WASM_FILES =  ../website/wasm/*.*
.PHONY: clean


pong.wasm: main.o consoleLog.o graphics.o vector2D.o 
	emcc main.o consoleLog.o graphics.o vector2D.o -o pong.wasm
	cp pong.wasm $(WASM_DIR)
	rm -f pong.wasm
	rm -f main.o consoleLog.o graphics.o vector2D.o 

main.o: main.c consoleLog.h
	emcc -c main.c -o main.o
consoleLog.o: consoleLog.c consoleLog.h
	emcc -c consoleLog.c -o consoleLog.o
graphics.o: graphics.c graphics.h rectangle.h vector2D.h
	emcc -c graphics.c -o graphics.o
vector2D.o: vector2D.c vector2D.h
	emcc -c vector2D.c -o vector2D.o
clean:
	rm -f main.o consoleLog.o graphics.o vector2D.o pong.wasm
	rm -f $(WASM_FILES)

