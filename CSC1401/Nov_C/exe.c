#include <stdio.h>

int main(){
    int n,j,i;
    printf("input l7za9 \n");
    scanf("%d",&n);
    for ( i = 0; i <n; i++){
        for ( j=0; j<i ; j++)
        {
            printf("%d",j);
        }
        printf("\n");  
    }
    
}
/* 
int main(){
    int n,j,i;
    printf("input l7za9 \n");
    scanf("%d",&n);
    for ( i = n; i >0; i--){
        for ( j=i; j>0 ; j--)
        {
            printf("%d",j);
        }
        printf("\n");  
    }
    
}*/