#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc < 2) {
        printf("ERROR: You need at least one argument.");
        // this is how you abort a program
        return 1;
    }

    int arg_idx = 1;
    for (arg_idx = 1; arg_idx < argc; arg_idx++) {
        printf("Evaluating argument %d ...\n", arg_idx);

        int i = 0;
        for (i = 0; argv[arg_idx][i] != '\0'; i++) {
            char letter = ',';
            letter = argv[arg_idx][i];

            // to lower case
            if (letter <= 90) {
                letter += 32;
            }

            switch(letter) {
                case 'a':
                    printf("%d: 'A'\n", i);
                    break;

                case 'e':
                    printf("%d: 'E'\n", i);
                    break;

                case 'i':
                    printf("%d: 'I'\n", i);
                    break;

                case 'o':
                    printf("%d: 'O'\n", i);
                    break;

                case 'u':
                    printf("%d: 'U'\n", i);
                    break;

                case 'y':
                    // why i > 2? Is this a bug?
                    if (i > 2) {
                        // it's only sometimes Y
                        printf("%d: 'Y'\n", i);
                        break;
                    }

                default:
                    printf("%d: %c is not a vowel\n", i, letter);
            }
        }

        printf("\n");
    }

    return 0;
}

