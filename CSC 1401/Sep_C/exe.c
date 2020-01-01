#include <stdio.h>
int main(void){
    int y,w,d,x;
    scanf("%d",&x);

    if (x>=0)
    {if (x<365)
    {
    y=x/365;
    printf("%d years, ",y);
    w=(x%365)/7;
    printf("%d weeks ,and ",y);
    d=x%7;
    printf("%d days\n",y);
    }}
    else if (x<365){
    w=(x%365)/7;
    printf("%d weeks ,and ",y);
    d=x%7;
    printf("%d days\n",y);
    } else{
        printf("wrong input\n");
    }
    return 0;
}