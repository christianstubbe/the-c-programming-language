#include <stdio.h>

/* copy input to ouput and
    replace strings with one or more blanks with a single blank */

main()
{
    int c;

    c = getchar();
    while (c != EOF) {
        if (c = " ") {
            c = getchar();
            if (c = " ") {
                putchar(c);
                c = getchar();
            }
        };
    }
}