#include <cstdlib>
#include <cstdint>
#include <unistd.h> 

int main() {
    if (daemon(1, 0) == -1) {
        return 1; 
    }

    while (true) {

        uint32_t* AllocMemory = (uint32_t*)malloc(100000 * sizeof(uint32_t));
        
        (void)AllocMemory; 

        usleep(5000); 
        
    }

    return 0;
}