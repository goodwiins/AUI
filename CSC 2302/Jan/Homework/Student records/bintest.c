// This is the basis for a program to support accessing and updating
// student information using 2 files, a text file for quick access to 
// name and index for each student, and a binary file which stores all
// student data in large records.

// Your task is to complete the program (including making sample data
// files) so that it works correctly.
#define MAX_COURSES 20
#define MAX_STUDENTS 50

// typedef gives a new name to an existing defined type.
// Used with struct, it generally looks like:
//	typedef struct (struct name is omitted) { fields ... } <typename>;

// This structure defines a grade for a student in a course.
typedef struct {
	char courseid[8]; // Example: CSC2302
	int section;
	float grade;
} course;

// This structure defines the set of grades that a student has
// earned in all courses, i.e. the course history.
typedef struct {
	char firstname[15], lastname[15];
	course courses[MAX_COURSES];
} studentRecord;

// This is a sample of a collection of many student records;
// practically, these are all stored in the binary file and
// never loaded into memory together. 
//	studentRecord records[MAX_STUDENTS];

// We only load one record at a time from the binary file.
studentRecord theRecord;

// This structure defines the name used to search for a student.
// The index of the student in this array is the same as their 
// index in the studentRecord binary file.
typedef struct {
	char firstname[15], lastname[15];
} studentIndex; 

studentIndex indexs[MAX_STUDENTS];

// This function reads the student names from the text file, and stores
// them in the index array. It assumes that the names are in the same
// order in the text file as the records are in the binary file.
void readindexs(){
	FILE *infile = fopen("index.txt", "r");
	int current = 0;
	while(!feof(infile)) {
		fscanf(infile, "%s %s", indexs[current].firstname, indexs[current].lastname);
		current ++;
	}
	
}

// This function finds the index of a student using their first and last name.
// Note that this function ASSUMES the student is actually in
// the list. It will cause an error if they are not.
// You should probably fix that.
int findStudent(char *firstname, char *lastname) {
	int current = 0;
	while(strcmp(firstname, indexs[current].firstname) || 
		strcmp(lastname, indexs[current].lastname)) 
			// This means that one of the names is different, so go
			// on to the next record.
			current++;
	return current;
}

// This function loads the student record for a specific student
// from the binary file, given the index of that student.
void fillStudent(int index, studentRecord *student) {
	FILE *rfile = fopen("student.bin", "rb");
	fseek(rfile, index*sizeof(studentRecord), SEEK_CUR);
	fread(student, sizeof(studentRecord), 1, rfile);
	fclose(rfile);
}

// Other functions? What do you need to make this work?