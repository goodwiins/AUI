/***
 * Author: Omar IRAQI
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char *surprise = (char*)malloc(18);
    int *p = (int*)surprise;
    short *q;

    *p = 1668048215;
    p++;

    *p = 543518063;
    p++;

    *p = 1092644692;
    p++;

    *p = 975194453;
    p++;

    q = (short*)p;
    *q = 10541;
    
    printf("%s\n", surprise);
    return 0;
}
