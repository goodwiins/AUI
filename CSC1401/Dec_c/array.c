#include <stdio.h>
#include "functions.h"
#define SIZE 5

int main(void){
	int n = 2, i = 0;

	/*int i;
	float grades[SIZE], sum, avg;
	
	for(i = 0; i < SIZE; i++){
		printf("Please enter a grade: ");
		scanf("%f", &grades[i]);
	}

	for(i = 0; i < SIZE; i++){
		sum += grades[i];
		printf("%f\n", grades[i]);
	}

	avg = sum / SIZE;
	printf("AVG is: %f\n", avg);*/

	init();

	/*printf("%ld", f1);*/
	while(scanf("%d", &n) && n >= 0)
		printf("FIB(%d) = %ld\n", n, rfib_optimized(n));

	for(; i < MAX_SEQUENCE; i++)
		printf("%ld ", fib_numbers[i]);
		
	return 0;
}
