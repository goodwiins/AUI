#include <stdio.h>
int main(void)
{
    int n,s=0,c=0;
    scanf("%d",&n);
    while (c<=n)
        {
            printf("%d ",c);
            c++;
            s+=c;
        }
    printf("\n");
    printf("The sum is: %d\n",s);
    return 0;
}
