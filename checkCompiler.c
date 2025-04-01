#include <stdio.h>  
int main() {  
    #if defined(__GNUC__) && !defined(__clang__)  
        printf("This is GCC version: %d.%d.%d\n",   
            __GNUC__, __GNUC_MINOR__, __GNUC_PATCHLEVEL__);  
    #elif defined(__clang__)  
        printf("This is Clang version: %d.%d.%d\n",   
            __clang_major__, __clang_minor__, __clang_patchlevel__);  
    #else  
        printf("This is some other compiler\n");  
    #endif  
    return 0;  
}
