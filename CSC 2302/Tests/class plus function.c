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
  int index=0,n; //each element has an index in the class
  char keyword[10];
  //adding the students
    student_t s0={.id= 79945,.name= "iliass jabali"};
    student_t s1={.id= 81231,.name= "zakaria taleb"};
    student_t s2={.id= 82057,.name= "mohamed adnane al khiati"};
    add_student(class, &s0, index++);
    add_student(class, &s1, index++);
    add_student(class, &s2, index++);
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
          printf("Enter a keyword *(lower case only)*\n");
          scanf("%s", keyword);
          printf("There's %d",search_by_name(class,keyword,index));

        break;
      case 4:
        display_all(class,index);
    }

  return 0;
}

void add(student_t* class[], int index){
  student_t s;
  //int n;
  char *temp = (char*)malloc(50);
  printf("Enter a name\n");
  getchar();//to take out the space the space
  gets(temp);
  printf("Enter a ID\n");
  scanf("%d",s.id);//STRING INPUT

  /*if(isdigit(n))
    s.id=n;
  else
    printf("The ID input is not a int\n");
  */
  //didin't add it because it didi'nt work for long, must find a solution either using strings or somthing else
  
  add_student(class, &s, index);
}

void add_student(student_t* class[], student_t *studentp, int index){
   class[index] = studentp;
}
void display_all(student_t* class[], int index){
  int i;
  for(i=0; i<index ; i++){
    printf("The name is %s\nID is %d\nAt position at %d\n",class[i]->name,class[i]->id,i);
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
  else
    return 0;
}
int search_by_name(student_t* class[],char* keyword, int index){
  int i,n=0;
  for(i=0;i<index;i++){
    if((search_in(class[i]->name,keyword))==1){
      printf("The names is %s and Id is %d\n",class[i]->name,class[i]->id);
      n++;
    }
  }
  return n;
}
/*
- add search
- islower/isdigit it couldnt find the thing t and is
- also i think there's some memory leaks in using malloc
*/