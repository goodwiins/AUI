#include <stdio.h>
#include "header.h"
int main(void){
   // student number; grade number 
   float av, grade=80, grades[10];
   int c=0;
   fill(grades);
   av=avreage(grades);
   c=count(grades, grade);
   printf("avreage grade is : %f\n",av);
   printf();
   return 0;

}