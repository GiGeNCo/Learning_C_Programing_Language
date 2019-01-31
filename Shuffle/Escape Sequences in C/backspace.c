#include <stdio.h> 
int main(void) 
{ 
    // \b - backspace character transfers 
    // the cursor one character back with  
    // or without deleting on different  
    // compilers. 
    printf("Hello\b wo\brld\b"); 
    return (0); 
} 