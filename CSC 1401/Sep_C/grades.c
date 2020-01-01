#include <stdio.h>
int main(void)
{
    /*function that convert from num to grades
    x = grades */
    float x;
    scanf("%f",&x);
        if (x >= 90)
            {
            printf("A\n");
            }
        else if (x >= 80)
            {
            printf("B\n");
            }
        else if (x >= 70)
            {
            printf("C\n");
            }
        else if (x >= 60)
            {
            printf("D\n");
            }
        else
        {
            printf("F\n");
        }
    return 0;
}