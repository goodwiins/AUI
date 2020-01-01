#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int *p = (int*) malloc(sizeof(int));
	char *q = (char*)p;
	*q = 'H';
	q++;
	*q = 'e';
	q++;
	*q = 'l';
	q++;
	*q = 'l';
	q++;
	printf("%d\n", *p);
	return 0;
}

