#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
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
void display_all(student_t* class[], int index);
int search_by_name(student_t* class[],char* keyword, int index);
int search_in(char* names,char* keyword);


int main(void){
  //Declaring the class
  student_t* class[SIZE];
  int index=0,n; //each elment has an index in the class
  char* keyword;
    student_t s1={.id= 79945,.name= "iliass jabali"};
    add_student(class, &s1, index++);
    student_t s2={.id= 95163,.name= "full name"};
    add_student(class, &s2, index++);
    student_t s3={.id= 80116,.name= "bouta"};
    add_student(class, &s3, index++);

  printf("The options are: \n1)To add a student to the the class \n2)To search for a student by ID \n3)To search for a student by name \n4)To display the names and IDs in the class\n\n");
  scanf("%d",&n);

    switch(n){
      case 1:
        add(class,index++);
        break;
      case 2:
        printf("Enter an ID to search ");
        scanf("%d",&n);
        if(search_by_id(class, n, index)>=0){
          printf("\nThe full name is\n%s",class[search_by_id(class, n, index)]->name);
          printf("\nThe student is at: %d\n",search_by_id(class, n, index));
          printf("\n");
        } 
        
        else
          printf("\nThe student is not found\n");
      break;
      case 3:
          printf("Enter a keyword\n");
          getchar();
          scanf("%s",keyword);
          printf("There's %d",search_by_name(class,keyword,index));
        break;
      case 4:
        display_all(class,index);
    }

  return 0;
}

void add(student_t* class[], int index){
  student_t s;
  int n;
  char *temp = (char*)malloc(50);
  printf("Enter a name\n");
  getchar();
  gets(temp);
  printf("Enter a ID\n");
  scanf("%d",&n);//STRING INPUT
  
  if(isdigit(n))
    s.id=n;
  else
    printf("The ID input is not a int\n");
  
  add_student(class, &s, index);
}

void add_student(student_t* class[], student_t *studentp, int index){
   class[index] = studentp;
}
void display_all(student_t* class[], int index){
  int i;
  for(i=0; i<index ; i++){
    printf("the name is %s and ID is %d at position at %d\n",class[i]->name,class[i]->id,i);
  }
}
int search_by_id(student_t* class[], int id, int index){
   int i;
   for (i = 0; i < index; i++)
        if (id == class[i]->id)
            return i;
    return -1;//-1 means it's not in the library
}
int search_in(char* names,char* keyword){
	char *ptr = strstr( names,keyword);
  //printf("%s", strstr(keyword, names));
	if (ptr != NULL){
		return 1;// means that its true
	}
}
int search_by_name(student_t* class[],char* keyword, int index){
  int i,n=0;
  for(i=0;i<index;i++){
    if((search_in(class[i]->name,keyword))!=1){
      printf("The names are %s and id is %d\n",class[i]->name,class[i]->id); 
      n++;
    }
  }
  return n;
}
