# Structures and Other Data Types
## Data types you have seen so far:
* Simple: int, double, float, char
* Structured: arrays, strings (arrays of char) 

## Structures: 
* A new derived data type / data structure
* Used a lot! (Stacks, Queues, Linked Lists,Trees,  ..)

## Why Structures?
#### Need to aggregate data of different types
* Arrays: gather data elements of the same data type (homogeneous)
* Structures: gather data elements of different types (heterogeneous)
* C/C++ structures are called records in some other languages.
  * A typical use of structures is representing database records 

## Databases
* A DB/Table is composed of a set of records (rows).
* Each record contains a set of fields (columns).
* So, to implement a DB you need a data type that can gather elements of different types.

## Defining Structures: One Way
* So, give the structure a name: a compound name

```C
struct mystruct1{
  int age; 
  char name[10];
}
struct mystruct1 var1;
struct mystruct1 var2;
var1 = var2;  // this is okay

struct mystruct2 {
		int age; 
		char name[10];
	} var3 = {18, “Hind”};
	struct mystruct2 var4 = {19, “Ahmed”};
  var3 = var4; // this is okay too
```
* BUT you have to keep using struct  mystruct1 or struct  mystruct2 

## Defining Structures: Another Way
```C
typedef struct  {
		char	   name[20];
		int    credits_num;  
		double g1, g2, g3;
		char   grade;		
} student;

student Ali, Hind;
```
* student has become a regular data type!

## Defining Structures: General
```C
typedef struct [name] {
		data_type_1   member_1;
		data_type_2   member_2;
     ...
		data_type_n   member_n;
} struct_name;
 
struct_name Var_1, Var_2;
```
Var_1  &  Var_2 are two variables of type struct_name
* Def:  Members—elements of a structure 
* Also use records for structures and fields for members (terminology used in DBs and other PLs ) 
* Structure name is optional (and usually omitted) with typedef used in this way, but is mandatory without it

## A Third Way of Defining a Structure Type
```C
typedef struct name struct_name;

struct name {
		data_type_1   member_1;
		data_type_2   member_2;
     ...
		data_type_n   member_n;
};
struct_name Var_1, Var_2;
```
This allows you to declare the type name separately from giving its definition (like function prototypes and definitions)

## Initializing Structures 
You can assign values to each member of a structure when you first define a variable of that structure type: 
```c
typedef struct  {
		char	   name[20];
		int     credits_num;  
		double  g1, g2, g3;
		char    grade;		
	} student;
student s1 = {"Ann Ying", 60,80.0, 75.5, 92.0, 'B'};
student s2 = {“Joe Fox", 15, 80.0}; 
```
Initialization values must match the order of members: 
```c
typedef struct  {
		char	  name[20];
		int     credits_num;  
		double  g1, g2, g3;
		char    grade;		
	} student;
```
* Good, complete initialization: 
```c
student s1 = {"Ann Ying", 60, 80.0, 75.5, 92.0, 'B'};
```
* Good, partial initialization: 
```c
student s2 = {“Joe Fox", 15, 80.0}; 
```
* Bad, partial initialization (missing values):
```c
student s3 = {60, 80.0, 75.5, 92.0, 'B'};
student s4 = {"Ann Ying", 60, 92.0, 'B'};
```
* Good, partial initialization with **designated initializerstyle**
```c
student s5 = {.g1 = 80.0, .name = "Ann Ying"};
```
### struct, typedef, Variables, and Initialization
* struct  just defines a “template” 
* typedef  gives the template a name
* Defining variables allocates memory.
  * Ex.  student Ali, Hind;
  * Ali & Hind will have the same amount of memory space allocated as they are of the same data type.
  * You can initialize structure members when you declare variables, but not when you define the structure type.

## Assigning Structures
* Whole structure assignment
```c
typedef struct  {
		char	   name[20];
		int     credits_num;  
		double  g1, g2, g3;
		char    grade;		
	} student;
student s1 = {"Ann Ying", 60, 80.0, 75.5, 92.0, 'B'},s1copy;
  s1copy = s1; 
```
## Accessing Structures Members with the Dot Operator (.)
```c
typedef struct  {
		char	   name[20];
		int     credits_num;  
		double  g1, g2, g3;
		char    grade;		
	} student;
student s2 = {“Joe Fox", 15, 80.0}; 
	printf (“%s, %d, %lf”, s2.name,s2.credits_num, s2.g1);
```
* You can assign to members of structures with a normal assignment statement,e.g.
```c
student s1;
s1.g1 = 90.5;
```
EXCEPTION: When the member is an array of character, you cannot assign to it.  You must use strcpy(…) in <string.h>, e.g.
```c
strcpy(s1.name, “John Doe”);
```
## Hierarchical (Nested) Structures
* Structures can be members of other structures.
* Example:
```c
typedef struct {
    double midterm;
    double final;
  char grade;
} grade_t;
typedef struct {
    char name[20];
    grade_t gr;
} student_t;   
student_t s;
```
* To access the member “final”:  s.gr.final

## Structures as Parameters 
* Passed By Value: 
	
To print some of the members of S:
```c
void PrintStudent(student_t S) {
    printf(“Name: %s\n Grade: %c”, S.name, S.gr.grade); 
}
// In calling program
student_t s1;
PrintStudent(s1); 
```
* Passed by Reference 
To enter some of the info for S
```c
void FillStudent (student_t  *S) {
  		printf(“Enter Name & Grade: ”);
  		scanf( “%s %c”,(*S).name, & (*S).gr.grade);
 }  
student_t s1;
FillStudent(&s1); 
```
**NOTE: (*S).name is an array.  No & needed.**
## Structures as Return Values
* A value of struct type can be returned from a function
  * Like simple data types
  * Unlike arrays (returns the address of the array)
* Write a function `fill_up` that reads information into a local variable of type student and returns it to the caller.

## Pointers and Structures
* Exs: (*S).name, &(*S).gr.grade;
* *S means that the pointer to S is being _dereferenced_, that is, we are using the address stored in the pointer variable to access the value stored at that address.
* The parentheses around *S make sure that the pointer S is _dereferenced_ first, _before applying the dot operator to access the member._
* Alternative Notation: *arrow operator*
  ```c
    S->member
  is equivalent to 
    (*S).member
```



