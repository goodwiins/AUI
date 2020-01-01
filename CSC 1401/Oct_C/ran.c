#include <stdio.h>
int main(void)
{
    int a;
    printf("number? ");
    scanf("%d",&a);
    if (a==1)
        {
        
            printf("Sunday\n"); 
        }
    else if (a==2)
        {
        
            printf("Monday\n"); 
        }
    else if (a==3)
        {
        
            printf("Tuesday\n"); 
        }
    else if (a==4)
        {
        
            printf("Wednesday\n"); 
        }
    else if (a==5)
        {
        
            printf("Thursday\n"); 
        }
    else if (a==6)
        {
        
            printf("Friday\n"); 
        }
    else if (a==7)
        {
        
            printf("Saturday\n"); 
        }
    else
    {
        printf("wrong input\n");
    }
return 0;
}
