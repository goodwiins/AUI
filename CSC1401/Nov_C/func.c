#include <stdio.h>
int array[5];
void fill_arr(){
    printf("enter the values\n");
    for(int i=0;i<5;i++){
        printf("Input a value %d: ",i);
        scanf("%d",&array[i]);
    }
    printf("\n");
}
// check if a prime and coppie it to two seprate arrays 
int odd[5], even[5], j=0, k=0;
void check(){
    for (int i = 0; i < 5; i++){
        if (array[i]%2==0){
           even[j] = array[i];
           j++;
        }
        else if (array[i]%2==1){
           odd[k] = array[i];
           k++;
        }   
    } 
}

void print_odd_even(){
    printf("Odd values are: ");
    for(int i=0;i<5;i++){
        if(even[i]==0)
            break;
        printf("%d ",odd[i]);
    }
    printf("\n");
    printf("Even values are: ");
    for(int i=0;i<5;i++){
        if(even[i]==0)
            break;
        printf("%d ",even[i]);
    }
    printf("\n");
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
