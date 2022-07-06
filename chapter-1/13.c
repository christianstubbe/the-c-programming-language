/* Write a program to print a histogram of the lengths of words in its input. It is
easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging */

#include <stdio.h>

#define MAXLENGTH 10    /* length of largest word */

int main(void) {
    
    int i, c, j;
    int lengthOfWord;
    int nWordLength[MAXLENGTH];

    lengthOfWord = 0;
    for (i = 0; i < MAXLENGTH; i++) {
        nWordLength[i] = 0;
    }

    while((c=getchar()) != EOF){
        ++lengthOfWord;
        if(c == ' ' || c == '\n' || c == '\t') {
            ++nWordLength[lengthOfWord - 1]; 
            lengthOfWord = 0;
        }
    }

    for (j = 0; j < MAXLENGTH; ++j) {
        printf("%d: %d \n", j, nWordLength[j]);
    }

    return 0;
}