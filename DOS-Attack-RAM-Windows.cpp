#include <Windows.h>
#include <cstring>
#include <cstdlib>
#include <cstdint>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow){
    while(true){
        uint32_t* AllocMemory = (uint32_t*)malloc(100000 /* < -- Please changes the number for octets */ * sizeof(uint32_t));
        

        Sleep(5); // break of 5s for each loop but Please change the value if it doesn't agree for you
    }

    
}