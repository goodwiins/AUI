#include <stdio.h>
long fac(int);
long pow(int,int);
int main(void){
    int n;
    printf("input ");
    scanf("%d",&n);
    printf("the result %ld\n",fac(n));
    return 0;
}
long fac(int n){
    if(n==0)
        return 1;
    return n*fac(n-1);
}