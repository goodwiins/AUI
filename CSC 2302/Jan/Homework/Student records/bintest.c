#include <string.h>
#include <stdio.h>
// This is the basis for a program to support accessing and updating
// student information using 2 files, a text file for quick access to 
// name and index for each student, and a binary file which stores all
// student data in large records.

#define MAX_COURSES 20
#define MAX_STUDENTS 50


// This structure defines a grade for a student in a course.
typedef struct {
	char courseid[8]; // Example: CSC2302
	int section;
	float grade;
} course;

// This structure defines the set of grades that a student has earned in all courses, i.e. the course history.
typedef struct {
	char firstname[15], lastname[15];
	course courses[MAX_COURSES];
} studentRecord;

// This is a sample of a collection of many student records; practically, these are all stored in the binary file and never loaded into memory together. studentRecord records[MAX_STUDENTS];
// We only load one record at a time from the binary file.
studentRecord theRecord;

// This structure defines the name used to search for a student. The index of the student in this array is the same as their  index in the studentRecord binary file.
typedef struct {
	char firstname[15], lastname[15];
} studentIndex;

studentIndex indeces[MAX_STUDENTS];
const char tok[2] = "-"; // to tokenize for binary file

// This function reads the student names from the text file, and stores them in the index array. It assumes that the names are in the same order in the text file as the records are in the binary file.
void readIndeces(){
	FILE* infile = fopen("index.txt", "r");
	int current = 0;
	while(!feof(infile)) {
		fscanf(infile, "%s %s", indeces[current].firstname, indeces[current].lastname);
		current ++;
	}
	
}

// This function finds the index of a student using their first and last name.
int findStudent(char *firstname, char *lastname) {
	int current = 0;
	while(strcmp(firstname, indeces[current].firstname) || 
		strcmp(lastname, indeces[current].lastname))
    {
	      if (current== MAX_STUDENTS) 
        {
        return -1; // flag to show that student was not found + avoid segmentantion fault 
        }
        
      	current++;
    }

	return current;
}



// This function loads the student record for a specific student from the binary file, given the index of that student.
void fillStudent(int index, studentRecord *student) {
  /*studentRecord temp;
  char line[150];
  char *token;
  int i; */
	FILE *rfile = fopen("student.txt", "rb");
/*
TRIED TO fix the parsing 
  while (!feof(rfile))
  {
    fread(temp.firstname, sizeof(temp.firstname), 1, rfile);
    fread(temp.lastname, sizeof(temp.lastname), 1, rfile);
    fread(line, sizeof(line), 1, rfile);
         while (!strcmp(line, "*****************"))
    { token = strtok(line, tok);
      strcpy(temp.courses[i].courseid, token);
      token = strtok(line, tok);
      temp.courses[i].section= i; //token; figure out how to string to int 
      token = strtok(line, tok);
      temp.courses[i].grade= i; //token; figure out how to string to float  
      i++;
    }
  } */
  
fseek(rfile, index*sizeof(studentRecord), SEEK_CUR);
fread(student, sizeof(studentRecord), 1, rfile);
	fclose(rfile);
}


// Other functions? What do you need to make this work?

int main(void){
   studentIndex student;
   studentRecord recordFound;
   int n=0;
   int index;
   printf("------Select One Of The Choices------\n\n");
   printf("(1)\tSearch for a student by name\n");
   printf("(2)\tView student record of specific student\n");
   printf("(3)\tUpdate a student \n");
   printf("(4)\tExit\n\n\n");
   printf("Couldn't fix the loading of the student records from the binary file");
   
    do{
      printf("\nChoice:");
      scanf("%d", &n);
      switch (n) {
      case 1:
            printf("Enter the student first name:  ");
            scanf("%s",student.firstname);
            printf("\nLast name:  ");
            scanf("%s",student.lastname);
            readIndeces();
            index = findStudent(student.firstname,student.lastname);
            if (index!= -1) printf("\n Student found in index: %d", index);
            else printf("\n User NOT Found.");
            
            break;
      case 2:
            printf("Enter the student first name:  ");
            scanf("%s",student.firstname);
            printf("\nLast name:  ");
            scanf("%s",student.lastname);
            readIndeces();
            index = findStudent(student.firstname,student.lastname);
            if (index!= -1)
            {
              printf("\n Student found in index: %d", index);
              fillStudent(index, &recordFound); 
             printf("\n First name: %s Last Name: %s\n", recordFound.firstname, recordFound.lastname);
             printf("Courses Taken:\n %s %d %lf\n", recordFound.courses[0].courseid, recordFound.courses[0].section, recordFound.courses[0].grade);
            }
            else printf("\n User NOT Found.");
            
            break;
         case 3:
            printf("Not implemented; couldn't fix the loading of the student records from the binary file");
            break;
            
         default:
            break;
      } 
   }while (n!=4);
   return 0;
}