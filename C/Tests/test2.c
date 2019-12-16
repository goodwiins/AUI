#include <stdio.h>
#define SIZE 100
typedef struct{
  int id;
  char* name;
  char* school;
}student_t;

void add_student(student_t* class[],student_t*,int index);


int main(void) {
  student_t* class[SIZE];
  int index=0,n;
  student_t s1={.id=79945,.name="Iliass JABALI",.school="SSE"};
  add_student(class,&s1,index++);
  printf("Pick the commande: \n1)Search by id.\n 2)Search   ");
  switch (n)
  ​{
    case constant1:
      // statements
      break;
    case constant2:
      // statements
      break;
    .
    .
    .
    default:
      // default statements
}
  return 0;
}

void add_student(student_t* class[], student_t *studentp, int index){
   class[index] = studentp;
}
