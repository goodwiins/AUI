#include <stdio.h>
int main(void)
{
    int i,n;
    scanf("%d",&n);
    for ( i = 2; i <= n; i++){
        if (n%i==0 )
        { 
            break;
        }
    }
    
    if(i==n){
        printf("its prime\n");
    }
    
    else
    {
        printf("its not\n");
    }
    

    
	return 0;
}
