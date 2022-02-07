It is really hard to read some declarations that involves pointers to functions.
Even experienced people struggle in reading some declarations

Rule
    Convert the declaration to post fix notatation and read.
    a.  Start from inner most paranthasis.
    b.  goto right and then left
    c. continue step b until completly parsing the value

Example
    int (*fp)()
        Converting to postfix format -> it becomes
        [ fp * () int ]
        fp is pointer to function returning int.


#include <stdio.h>
int (*fp)();
int func(void) { printf("hello\n"); }
int main()
{
    fp = func;
    (*fp)();
    // fp(); // This will also call func
    return 0;
}

