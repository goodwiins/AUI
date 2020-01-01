#define NS 6
#define NC 20
void fill(float grades[][]){
   for (int i = 0; i < NC ;i++){
      scanf("%f",&grades[i]);
      for (int j = 0; i < NS ;j++){
      scanf("%f",&grades[j]);
   }
}

float avreage(float grades[]){
   float s=0;
   for(int i=0; i<SIZE;i++){
      s+=grades[i];
   }
   return s/SIZE;
}

float count(float grades[],float grade){
   int c=0;
   for (int i = 0; i < SIZE; i++){
      if (grades[i]>grade)
         c++;
   }  
   return c;
   
}
void cwa(g[][],w[][],wag[][]){
   int s=0,i,j;
   for()
}