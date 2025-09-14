#include <stdio.h>


int main(void)
{
    float fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("Fahrenheight to Celsius Table\n");

    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%3.0f\t%6.1f\n", fahr, celsius);
     //   printf("%6.1f\t%3.0f\n", celsius,  fahr);
        fahr = fahr + step;
    }

    printf("Celsius to Fahrenheight Table\n");
    upper = 149;
    celsius = -17.8f;
    while (celsius <= upper) {
        fahr = (9.0f / 5) * celsius + 32;
        printf("%6.1f\t%3.0f\n", celsius,  fahr);
        celsius = celsius + step;
    }
    return 0;
}