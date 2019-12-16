#include <stdio.h>
#include <string.h>
#define SIZE 100

//Defining the struct
typedef struct{
  int id;
  char* name;
}student_t;

//Defining the functions
void add_student(student_t* class[], student_t* , int index); 
int search_by_id(student_t* class[],int, int index);
void add(student_t* class[], int index);


int main(void){
  //Declaring the class 
  student_t* class[SIZE];
  int index=0,n=0,x,i,j; //each elment has an index in the class 
  /*printf("how many student you want to add?  ");
  scanf("%d",&j);
  for(i=0;i<j;i++){*/
  add(class,index++);
  printf("Enter an ID to search ");
  scanf("%d",&n);
  if(search_by_id(class, n, index)>=0){
    printf("The student is at: %d\n",search_by_id(class, n, index));
    printf("The full name is %s\n",class[i]->name); 
  }  
  else
    printf("The student is not found\n");
  return 0;
}

//adding student to class 
//Still in work plus, I should add 
void add(student_t* class[], int index){
  student_t s;
  char *temp = (char*)malloc(50);
  printf("Enter a name\n");
  //scanf("%s",&(s.name));
  gets(temp);
  printf("%s",temp);
  printf("Enter a ID\n");
  //scanf("%d",&(s.id));
  add_student(class, &s, index);
}

void add_student(student_t* class[], student_t *studentp, int index){
   class[index] = studentp;
}
int search_by_id(student_t* class[], int id, int index){
   int i;
   for (i = 0; i < index; i++)
        if (id == class[i]->id)
            return i;
    return -1;//-1 means it's not in the library 
}
