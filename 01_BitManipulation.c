#include<stdio.h>
/*
 *
 *
 *  ip-> 0xDCBA
 *  op -> 0xBACD
 *
 */
int main(void)
{
    int ip=0xdcba;
    int op=((ip<<8 & 0xFF00)|(ip>>12)|(ip>>4 &0xf0));
    printf("0x%4x\n",op);
    return 0;
}
