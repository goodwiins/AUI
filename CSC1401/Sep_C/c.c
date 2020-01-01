#include <stdio.h>
int main(void)
{
    int i;
    /* the two empty lines*/
    for ( i = 0; i < 2; i++)
        {
            printf("\n");
        }
    printf("   ");
    for ( i = 0; i < 6; i++)
        {
            printf("#");
        }
    printf("  \n");
    printf(" ");
    for ( i = 0; i < 2; i++)
        {
        printf("#");
        }
    for ( i = 0; i < 6; i++)
        {
        printf(" ");
        }
    printf("#");
    for ( i = 0; i < 5; i++)
        {
            printf("#\n");
        }

    printf("#\n");
    printf(" ");

    for ( i = 0; i < 2; i++)
        {
        printf("#");
        }
    for ( i = 0; i < 6; i++)
        {
        printf(" ");
        }
    printf("#");
    printf("#\n");
    for ( i = 0; i < 3; i++)
        {
        printf(" ");
        }
    for ( i = 0; i < 6; i++)
        {
        printf("#");
        }
    /* the two empty lines*/
    for ( i = 0; i < 2; i++)
    {
        printf("\n");
    }
    return 0;
}