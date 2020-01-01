#include <stdio.h>
int fibo(int);

int main (void){
    int n;
    printf("fibo calc : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        printf("%d ",fibo(i));
    }
    printf("\n");
    
    return 0;
}
int fibo(int n){
    if (n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}
