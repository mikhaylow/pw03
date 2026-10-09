#include <stdio.h>
#include <string.h>

int main(void)
{
    char word1[15];
    char word2[15];

    if (scanf("%s %s", word1, word2) != 2)
    {
        return -1;
    }

    int len_word1 = strlen(word1);
    int len_word2 = strlen(word2);

    printf("%s-%s\nTOTAL_LEN: %d\n", word1, word2, len_word1 + len_word2);

    return 0;
}
