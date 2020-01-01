#include <stdio.h>
//declaring functions
int fib(int), pri(int);

int main(void)
{   
    
    int n, i, s=0, c=2;
    //ask for input 
    printf("pick a number  ");
    scanf("%d",&n);
    
    for (i = 1; i < n; i++){
    // accumulation of prime numbers Fibonacci values
        s+= fib(pri(i));
    }
    printf("result : %d\n",s);
    return 0;
}
// Fibonacci Sequence
int fib( int n)
{
    int  c,fn,fpp=0,fp=1;
    if (n<2){
            return n;
        }
    else if (n<0){
            return -1;
        }
    else{for (c=0;c<n ;c++){
            fn=fp+fpp;
            fpp=fp;
            fp=fn;                 
        }
    return fn;
    }

}
// Prime number selctor 
int pri( int n)
{
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