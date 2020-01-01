#include <stdio.h>

int main(void) {
  int s=100,a,n,x,t,z;
  char b='a';
    int ages[s];
    int i,j;
  printf("The number of candidates? ");
  scanf("%d",&s);

  printf("make sure that the age is beetween 18 and 30\n");
  for(i=0;i<s;i++){
    printf("Age of the candidate %d: ",i+1);
    scanf("%d",&a);
    if(a>=18 && a<=30)
      ages[i]=a;
  }
  

  printf("the optionsare: \n1)To print all the elements of the array \n2)Print the n number of elements \n3)search for an element \n4)to sort the array \n");
  while(b!='x'&& b!='X'){
    scanf("%d",&n);
    switch(n){
      case 1: 
        for(i=0;i<s;i++){
          printf("%d",ages[i]);
        }
        break;

      case 2: 
        printf("Enter n: ");
        scanf("%d",&x);
        for(i=0;i<x;i++){
          printf("%d\n",ages[i]);
        }
        break;
      case 3:
        printf("Enter the elment: ");
        scanf("%d",&z);
        for(i=0;i<z;i++){
          if(ages[i]==x){
            printf("the index is: %d\n",i);
            break;
          }
        }
        break;
      case 4:
        for(j=0;j<s-1;j++){
          for(i=s-1;i>j;i--){
            if(ages[i]>ages[i-1]){
              t=ages[i];
              ages[i]=ages[i-1];
              ages[i-1]=t;
            }

          }
        }
      default :
        printf("to continue press x\n");
        scanf("%c",&b);
        break;
    }

  }
  return 0;
}
