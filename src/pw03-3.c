#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[100];

    if (scanf("%99s", name) != 1) return -1;

    printf("\"%s\"\n", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);

    int padding = (int)strlen(name) + 5;

    printf("\"%*s  %s  %-*s\"\n", padding, "", name, padding, "");

    return 0;
}
