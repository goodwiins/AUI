#include <stdio.h>
void(num(int,int));
int l,u;
int main(void){
   printf("Lower  ?: ");
   scanf("%d",&l);
   printf("Upper  ?: ");
   scanf("%d",&u);
   num(l,u);
   printf("\n");
   return 0;
}
void num(int l, int u){
   if(l>u){
      return;
   }
   printf("%d ",l);
   return num(l+1,u);
}