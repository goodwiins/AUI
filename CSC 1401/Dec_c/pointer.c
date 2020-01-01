#include <stdio.h>
int main(void) {
	int x = 3, *p = &x;
	printf("%p\n", p);
	printf("%d\n", *p);
	p++;
	printf("%p\n", p);
	*p = 4;
	printf("%d\n", *p);
}

