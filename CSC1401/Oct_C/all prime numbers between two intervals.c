#include <stdio.h>
int l,u, pri(int);
int main(void){
  printf("Input lower limit: ");
  scanf("%d",&l);
  printf("Input upper limit: ");
  scanf("%d",&u);
  printf("\n");

  printf("Prime numbers between %d - %d are : ",l,u);
  for (int i = l; i < u; i++){
    if (pri(i)>1){
      printf("%d   ",i);
    }
    
  }
printf("\n");
printf("\n");
return 0;
}

// prime numbers
int pri( int n){
  int i;
  for ( i = 2; i <= n; i++){
    if (n%i==0){  
      break;
    }
  }
  // prime 
  if(i==n){
    return n;
  }
  //not prime
  else{
    return 0;
  }
}