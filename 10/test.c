#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc > 1) {
        char lc = argv[1][0] - 38;
        printf("%c", lc);
    }

    return 0;
}
