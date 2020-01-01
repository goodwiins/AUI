#include <stdio.h>
int main(void){
   int n,s=0, pri(int);
   scanf("%d",&n);
   for (int i = 1; i < n; i++){
     s+=pri(i);
   }
   printf("%d\n",s);
   return 0;
}
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
   return 0;
}