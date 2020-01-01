#include <stdio.h>
int main(void)
{
    int c,n;
    scanf("%d",&n);
    /*do
    {
        c++;
        n=n*c;
    } while (c<n);
    
    printf("%d\n",n);*/

    for ( c = 1; c <= n;c++ )
        {
            n*=c;
        }
    printf("%d\n",n);
return 0;
}
