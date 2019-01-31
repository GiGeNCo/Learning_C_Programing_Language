#include <stdio.h> 
int main(void) 
{ 
    // We are using \xhh escape sequence. 
    // Here hh is one or more hexadecimal 
    // digits(0....9, a...f, A...F). 
    char* s = "B\x3a";  // \x is mere aris hex simboloebi askis tablodan svavs shesabamis simbolos
    printf("%s", s); 
    return 0; 
} 