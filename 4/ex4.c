#include <stdio.h>

void crash()
{
    char *empty = NULL;
    
    for(int i = 0; i < 100000; i++) {
        printf("%c", empty[i]);
    }
}

int main(int argc, char *argv[])
{
    int age = 100;
    int height = 72;

    printf("I am %d years old.\n", argv);
    printf("I am %d inches tall.\n", height);
    crash();
    crash();
    crash();
    crash();
    crash();

    return 0;
}
