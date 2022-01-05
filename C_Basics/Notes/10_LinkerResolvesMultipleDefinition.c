//Read 05_compilation.c file to understand the basic concept

Strong symbol vs weak symbol
 Strong symbol - Functions and initialized global variables
 Weak symbol - Uninitialized global variable

//Linker rules for symbol selection
Rule 1: Multiple strong symbols (with same variable name) are not allowed.
Rule 2: Given a strong symbol and multiple weak symbols, choose the strong symbol.
Rule 3: Given multiple weak symbols, choose any of the weak symbols.

#include <stdio.h>
void b(void);

int x = 2016;
int y = 2017;
int main()
{
    b();
    printf("x = 0x%x y = 0x%x \n", x, y);
    return 0;
}
/*b.c*/
double x; //Silently having a bug and will choose the wrong variable

void b()
{
    x = -0.0;
}
