#include<stdio.h>
int main()
{
   float x = 0.1;
   printf("%d %d %d", sizeof(x), sizeof(0.1), sizeof(0.1f));
   return 0;
}
