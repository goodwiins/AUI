#include <stdio.h>
#include "array_functions.h"
#define SIZE 10

int main(void){
	int c = 0;
	float av, grade = 80.0, grades[SIZE];
	fill(grades);
	av = average(grades);
	c = count(grades, grade);
	printf("Average grade is: %f\n", av);
	printf("The number of grades bigger than %f is: %d\n", grade, c);
	return 0;
}

