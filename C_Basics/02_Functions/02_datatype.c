#include<stdio.h>
int main()
{
    float x = 0.5;
    if (x == 0.5)
        printf("IF");
    else if (x == 0.5f)
        printf("ELSE IF");
    else
        printf("ELSE");
}
