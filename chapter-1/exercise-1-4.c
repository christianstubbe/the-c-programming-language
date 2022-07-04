#include <stdio.h>

/* print Celsius-Fahrenheit table
    for fahr = 0, 20, ..., 300 */

main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;

    printf("Fahrenheit-Celsius table\n");

    while (celsius <= upper) {
        fahr = 1.8 * celsius + 32;
        printf("%3d %6d\n", celsius, fahr);
        celsius = celsius + step;
    }
}