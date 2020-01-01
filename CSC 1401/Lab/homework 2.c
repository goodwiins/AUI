#include <stdio.h>
void sort_array(int array[]);
void fill_array(int array[]);
int find_element(int array[],int f);
int n;

int main(void) {
  int array[50];
  int i,j,f;
//Defining the size of the array  
  printf("Array size: ");
  scanf("%d",&n);
  fill_array(array);
  sort_array(array);
  for(int a=0;a<n;a++){
    printf("%d\n",array[a]);
  }
  printf("Elment to find? ");
  scanf("%d",&f);
  printf("The elment is at: %d\n",find_element(array,f));
  return 0;
}
//Find an elment function
int find_element(int array[],int f){
  for(int i=0;i<n;i++){
    if(array[i]==f){
      return i;
    }

  }
}
//Filling the array
void fill_array(int array[]){
	for(int i = 0; i < n; i++){
    printf("Elements %d: ",i);
    scanf("%d", &array[i]);
  }
}
//Sorting the array
void sort_array(int array[]){
  int i,j,tmp;
  for (i = 0; i < n; i++){
      for (j = 0; j < n; j++){
        if (array[j] > array[i]){
          tmp = array[i];         
          array[i] = array[j];            
          array[j] = tmp;            
        }
      }
  }
}
