pong.wasm: main.o consoleLog.o 
	emcc main.o consoleLog.o -o pong.wasm
main.o: main.c consoleLog.h
	emcc -c main.c -o main.o
consoleLog.o: consoleLog.c consoleLog.h
	emcc -c consoleLog.c -o consoleLog.o

