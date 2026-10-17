#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char a = '0';

    if (scanf("%c", &a) != 1) return -1;

    printf("CODE_DEC: %d\nCODE_HEX: %x\nCODE_OCT: %o\nUPPER: %c\nNEXT: %c\nPREV: %c\n", a, a, a, toupper(a), a+1, a-1);

    return 0;
}
