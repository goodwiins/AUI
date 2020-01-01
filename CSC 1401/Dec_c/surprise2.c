#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char *surprise = (char*)malloc(18);
    int *p = (int*)surprise;
    short *q;

    *p = 1851877460;
    p++;

    *p = 1870209131;
    p++;

    *p = 1769152629;
    p++;

    *p = 975184242;
    p++;

    q = (short*)p;
    *q = 10541;
    
    printf("%s\n", surprise);
    return 0;
}
