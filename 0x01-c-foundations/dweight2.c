/* Computes the dimensional weight of a box from input provided by the user */

#include <stdio.h>
#define INCHES_PER_POUND 166


int main(void) {
    int length, width, height, volume, weight;
   
    printf("Enter height of the box: ");
    scanf("%d", &height);

    printf("Enter length of the box: ");
    scanf("%d", &length);

    printf("Enter width of the box: ");
    scanf("%d", &width);

    volume = length * width * height;
    weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);
    return 0;
}