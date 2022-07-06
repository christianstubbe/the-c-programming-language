/*  Write a program to print a histogram of the frequencies of different characters
in its input */

#include <stdio.h>

#define CHARS 128   /* total chars in asci */

int main(void){
    
    int c, i;
    int nCharCount[CHARS];

    for (i=0; i < CHARS; ++i){
        nCharCount[i] = 0;
    }

    while((c = getchar()) != EOF) {
        ++nCharCount[c];
    }

    for (i=0; i < CHARS; ++i) {
        printf("%d: %d \n", i, nCharCount[i]);
    }
    return 0;
}