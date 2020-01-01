#include <stdio.h>
#define SIZE 10

void fill(float grades[]){
	int i = 0;
	for(; i < SIZE; i++)
		scanf("%f", &grades[i]);
}

float average(float grades[]){
	float sum = 0.0;
	int i = 0;
	for(; i < SIZE; i++)
		sum += grades[i];
	return sum/SIZE;
}

int count(float grades[], float grade){
	int c = 0, i = 0;
	for(; i < SIZE; i++)
		if(grades[i] >= grade)
			c++;
	return c;	
}

