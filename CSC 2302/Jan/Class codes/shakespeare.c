#include <stdio.h>
#include <string.h> 

void main() {
	FILE *file = fopen("poetry.txt", "rw");
	int lines, i;
	char line[100];
	
	fscanf(file, "%d", &lines);
	
	for(i = 0; i < lines; i++) {
	//while(!feof(infile)) {
		fgets(line, 80, file);
		printf("Shakespeare wrote: %s", line);
		printf("Give me a line from La Fontaine: ");
		fgets(line, 80, stdin);
		fprintf(file, "%s", line);
		}
		
	fclose(file);
}