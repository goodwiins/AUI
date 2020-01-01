#include <stdio.h>
#define PI 3.1452

int main (void)
{
    float c,a,r;
    printf("Please inter a radius\n");
    scanf("%f",&r);
    /*this is a comment */
    c=PI*2*r;
    a=PI*r*r;
    printf("%f\n%f\n",c,a);
    return 0;
}
