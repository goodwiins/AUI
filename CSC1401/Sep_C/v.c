#include <stdio.h>
#include <math.h>
int main(void)
{
    int  x,y,z,q,t,a;
    float p;
    {
        printf("num ? ");
        scanf("%d",&x);
        printf("num ? ");
        scanf("%d",&y);
        printf("num ? ");
        scanf("%d",&z);
        printf("num ? ");
        scanf("%d",&q);
    }
    t= x+y+z+q;
    printf("Total: ‰d\n",t);

    a= (x+y+z+q)/5;
    printf("Avreage: ‰d\n",a);

    p= 100*(x+y+z+q)/5;
    printf("Avreage: ‰f\n",p);

 return 0;
}