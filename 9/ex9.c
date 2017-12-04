#include <stdio.h>

int my_exp2(int n) {
    int ret = 1;
    for(int i = 0; i < n; i++) {
        ret *= 2;
    }

    return ret;
}

int main(int argc, char *argv[])
{
    int i = my_exp2(30);
    while(i > 1) {
        printf("%d\n", i);
        i = i >> 1;
    }

    //need this one to add a final newline
    printf("\n");

    return 0;
}
