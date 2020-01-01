#include <stdio.h>
#include <stdlib.h>

int main(void){
	int i;
	char text[30] = "Hello World";
	/*char surprise[16];*/
	char *surprise = (char*)malloc(16);
	char *start = surprise;
	printf("%s\n", text);
	for(i = 0; i < 12; i++)
		printf("%d\n", text[i]);
	
	*surprise = 87;
	surprise++;
	*surprise = 101;
	surprise++;
	*surprise = 108;
	surprise++;
	*surprise = 99;
	surprise++;
	*surprise = 111;
	surprise++;
	*surprise = 109;
	surprise++;
	*surprise = 101;
	surprise++;
	*surprise = 32;
	surprise++;
	*surprise = 84;
	surprise++;
	*surprise = 111;
	surprise++;
	*surprise = 32;
	surprise++;
	*surprise = 65;
	surprise++;
	*surprise = 85;
	surprise++;
	*surprise = 73;
	surprise++;
	*surprise = 33;
	surprise++;
	*surprise = 0;

	printf("%s\n", start);
	return 0;
}
