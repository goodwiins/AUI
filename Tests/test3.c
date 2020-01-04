#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *temp = (char*)malloc(50);
    printf("Enter a name\n");
    getchar();
    gets(temp);
    return 0;
}

