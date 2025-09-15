#include <stdio.h>
/*count characters in input*/
int main()
{
    double nc;

    // nc = 0;
    // while (getchar() != EOF)
    //     ++nc;
    /* or using for loop*/
    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);
    return 0;
}