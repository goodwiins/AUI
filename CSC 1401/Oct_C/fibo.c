#include <stdio.h>

int main(void)
{
    int  n,c,fn,fpp=0,fp=1;
    scanf("%d",&n);
    if (n<2){
           printf("result is: %d\n",n);
        }
    else if (n<0){
            printf("result is: %d\n",n);
        }
    else{
        for (c=0;c<n;c++){
            fn=fp+fpp;
            fpp=fp;
            fp=fn; 
            printf("%d\n",fn);  
        }
        printf(" \n");
        printf("result is: %d\n",fn);
    }           
    return 0;
}