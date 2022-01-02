/* Example used here is C_Basics/02_Functions/05_int_max.c */

In c int is used to store both positive and negative number.
int is a 32bit/4byte container.
When a numeric container is not qualified as unsigned its a signed container.

In an unsigned container the Left most bit is considered as the sign bit.
that represent the bit it positive or negative.

int a=2147483647; // stored as 0x0111 1111 1111 1111

any number above this will be added as signed and will start counting back from negative.
in the example if we assign a=2147483648
we get the value as -2147483648 which is saved as 0x1000 0000 0000 0000

