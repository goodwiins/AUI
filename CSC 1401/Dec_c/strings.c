#include <stdio.h>
#include <string.h>

int main(void) {
	char text1[100] = "How are you doing?";
	char text2[100] = "Hello World!";
	
	printf("%s\n", text1);
	printf("%ld\n", strlen(text1));
	/*text = "How are you?";*/
	strncpy(text1, text2, 13);
	printf("%s\n", text1);
	printf("%ld\n", strlen(text1));
	/*text[12] = 'd';*/
	return 0;
}

