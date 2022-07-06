#include <stdio.h>

/* print number of tabs */

main(){

    int c, tabs;

    while ((c = getchar()) != EOF)
        if (c == "\t")
            ++tabs;
        printf("%d\n", tabs);
}