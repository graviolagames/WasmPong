WASM_DIR = ../website/wasm/
WASM_FILES =  ../website/wasm/*.*
ENGINE_DIR = engine/
GRAPHICS_DIR = $(ENGINE_DIR)graphics/
MATH_DIR = $(ENGINE_DIR)math/
DEBUG_DIR = $(ENGINE_DIR)debug/
INCLUDES = -I$(ENGINE_DIR) 
.PHONY: clean

pong.wasm: main.o consoleLog.o graphics.o vector2D.o 
	emcc $(INCLUDES) main.o consoleLog.o graphics.o vector2D.o -o pong.wasm
	cp pong.wasm $(WASM_DIR)
	rm -f pong.wasm
	rm -f main.o consoleLog.o graphics.o vector2D.o 

main.o: main.c  $(DEBUG_DIR)consoleLog.h
	emcc $(INCLUDES) -c main.c -o main.o

consoleLog.o: $(DEBUG_DIR)consoleLog.c $(DEBUG_DIR)consoleLog.h
	emcc $(INCLUDES) -c $(DEBUG_DIR)consoleLog.c -o consoleLog.o

graphics.o: $(GRAPHICS_DIR)graphics.c $(GRAPHICS_DIR)graphics.h $(MATH_DIR)rectangle.h $(MATH_DIR)vector2D.h
	emcc $(INCLUDES) -c $(GRAPHICS_DIR)graphics.c -o graphics.o

vector2D.o: $(MATH_DIR)vector2D.c $(MATH_DIR)vector2D.h
	emcc $(INCLUDES) -c $(MATH_DIR)vector2D.c -o vector2D.o

clean:
	rm -f main.o consoleLog.o graphics.o vector2D.o pong.wasm
	rm -f $(WASM_FILES)

