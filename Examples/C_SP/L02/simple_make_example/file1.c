#include <stdio.h>

extern int i; 

void f(); 
int main(void) { 
    f(); 
    printf("%d\n", i); 
    f();
    printf("%d\n", i);
} 
