#include <stdio.h>
#include <string.h>
//def student & def class
typedef struct  {
    int id;
    char* name;     //I'll try to allocate memory using malloc later on
    char major[5]
    int status; // 1== okay; 0= not okay
} student_t;

typedef struct {
    char* name;
    char code[9];
    int numb;
    student_t students[30];
}class_t;


int main(void){
    class_t c0=
    printf("")
}