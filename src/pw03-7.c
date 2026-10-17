#include <stdio.h>
#include <string.h>
#define DISTRO "LinuxDistro"

int main(void)
{
    const char r_date[] = "2026";
    printf("DISTRO: %s\nRDATE: %s\nSTRLEN: %ld\nSIZEOF: %ld\n", DISTRO, r_date, strlen(DISTRO), sizeof(DISTRO));

    return 0;
}
