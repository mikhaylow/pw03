#include <stdio.h>
#include <string.h>

int main(void)
{
    char symbols[20] = "SibSUTIS";

    const long  size_symbols = sizeof(symbols);
    const long symbols_len = strlen(symbols);

    printf("SIZEOF: %ld\nSTRLEN: %ld\nFREE_BYTES: %ld\n", size_symbols, symbols_len, size_symbols - symbols_len - 1);

    return 0;
}

