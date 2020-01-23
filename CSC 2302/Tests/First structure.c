#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//Defining the struct
typedef struct{
  int id;
  char* name;
}student_t;

/*typedef struct {
    char* name;
    char code[9];
    int numb;
    student_t students[30];
}class_t;*/

//Defining the functions
  int search_by_id(student_t* class[],int, int index);
  int search_by_name(student_t* class[],char* keyword, int index);
  int search_in(char* names,char* keyword);
  void add(student_t* class[], int index);
  void add_student(student_t* class[], student_t* , int index);
  void display_all(student_t* class[], int index);
  void sort_by_id(student_t* class[], int index);

int main(void){
  //Declaring the class
  student_t* class[50];
  int index=0,n,h; //each element has an index in the class
  char keyword[10];
  //adding the students
    student_t s0={.id= 81231,.name= "zakaria taleb"};
    student_t s1={.id= 79945,.name= "iliass jabali"};
    student_t s2={.id= 82057,.name= "mohamed adnane al khiati"};
    add_student(class, &s0, index++);
    add_student(class, &s1, index++);
    add_student(class, &s2, index++);
  //Options menu
  printf("The options are: \n1)To add a student to the the class \n2)To search for a student by ID \n3)To search for a student by name \n4)To display the names and IDs in the class\n5) To sort the students by their ID\n");
  //just to seperate  while running 
  for (h = 0; h < 20; h++){
    printf("-");
  }
  printf("\n");
  scanf("%d",&n);
while (1){ 
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
      break;
      case 5:
        sort_by_id(class,index);
      break;
    }
}
  return 0;
}

void add(student_t* class[], int index){
  student_t s;
   int num1,num2,num3;
   char temp[6];
   char *name = (char*)malloc(50*sizeof(char));
   char *id = (char*)malloc(5*sizeof(char));
   char *half1=(char*)malloc(2*sizeof(char));
   char *half2=(char*)malloc(2*sizeof(char));
   char *half3=(char*)malloc(2*sizeof(char));
   
   printf("Enter a name\n");
     getchar();//to take out the space the space
     gets(name);
     printf("Enter a ID\n");
      getchar();
     //scanf("%s",id);//STRING INPUT
      gets(id);
   // deviding the string
  memcpy(half1, id, 2 * sizeof(char));
  memcpy(half2, id + 2, 2 * sizeof(char));
  memcpy(half3, id + 4, 2 * sizeof(char));

   num1=atoi(half1);// it only accepts ints
   num2=atoi(half2);
   num3=atoi(half3);
    if (isdigit(num1)==0 && isdigit(num2)==0 && isdigit(num3)==0) {
        s.id=atoi(temp);// convert to a int
    }
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
void sort_by_id(student_t* class[], int index){
  int n, j, temp, min;
   min= class[0]->id;
   //finding the min
   for (j = 1; j < index; j++) {
      if ( class[j]->id < min)
         min = class[j]->id ;
   }
   //couldn't make it work so  Ill leave it as a comment
   for (j=0; j<index-1; j++) {
      if (class[j]->id <class[j+1]->id) {
         temp= class[j+1];
         class[j+1]=class[j];
         class[j]=temp;
      }
   }
}