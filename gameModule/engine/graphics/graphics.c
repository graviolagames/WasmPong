#include "graphics.h"
#include <SDL2/SDL.h>
#include <emscripten.h>

//Rendering context data
typedef struct RenderingData RenderingData;

struct RenderingData{
    SDL_Renderer *renderer;
    SDL_Window *window;
};

RenderingData *renderingData = 0;

unsigned char graphics_Init()
{
    //FIXME:Hardcoded window dymentions.
    if(renderingData == 0){
        renderingData = malloc(sizeof(RenderingData));
        SDL_Init(SDL_INIT_VIDEO); 
        SDL_CreateWindowAndRenderer(255,255,0,&renderingData->window,&renderingData->renderer);
        return 1;
    }

    return 0;
}

void graphics_Terminate()
{
    if(renderingData!=0){
        SDL_DestroyRenderer(renderingData->renderer);
        SDL_DestroyWindow(renderingData->window);
        SDL_Quit();
        free(renderingData);
        renderingData = 0;
    }
}

void graphics_RenderScene(Rectangle *rectangles)
{
    // Clear the color buffer
    
    //Iterate on all rectanles and draw them.

    // Swap the front and back buffers
    
}