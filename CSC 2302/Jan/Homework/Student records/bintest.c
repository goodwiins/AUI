// This was the simple class example to illustrate the difference
// in working with text and binary files.
// We wrote data into a binary file, and then read it back
// with different file types.
#include <stdio.h>
#include <string.h>

char *name = "Kevin"; 

// This structure is used in the binary file to tell the user
// what kind of data is coming next, by giving its type and
// number of values.
typedef struct {
	int type,  // type 1 = char, type 2 = int, type 3 = float
		size;  // size tells how many values to expect
} output;

// This function writes data into the binary file.
void writefile() {
	FILE *fp = fopen("test.bin", "wb");
	output print1 = {1, 6}; // Write 6 characters
	output print2 = {2, 3}; // Write 3 ints
	int num[3] = {42, 420, 2020};
	
	fwrite(&print1, sizeof(output), 1, fp);
	fwrite(name, sizeof(char), strlen(name)+1, fp);
	
	fwrite(&print2, sizeof(output), 1, fp);
	fwrite(num, sizeof(int), 3, fp);
	
	fclose(fp);
}

// This function reads the data in the binary file but treats
// it as text. It works sometimes, but sometimes not depending
// on what the data is.
void readfile() {
	FILE *fp = fopen("test.bin", "r");
	char name[10];
	fscanf(fp, "%s", name);
	fclose(fp);
	printf("%s\n", name);
}

typedef struct s {
	float num[10];
} num;

// These functions read the data in the binary file using the 
// output descriptors used to create the file.
// read1 reads one set of data.
// Since our example wrote 2 sets of data into the file,
// readfile2 calls read1 twice.
void read1(FILE *fp) {
	char name[10];	
	int nums[10];
	num mynum;
	int i;
	
	output print; // The output descriptor tells us what data is coming next.
	fread(&print, sizeof(output), 1, fp);
	
	if(print.type == 1) {// read characters into a string
		fread(name, sizeof(char), print.size, fp);
		name[print.size] = '\0';
		printf("%s\n", name);
	} else if(print.type == 2) {// read ints into an array
		fread(nums, sizeof(int), print.size, fp);
		for(i = 0; i < print.size; i++)
			printf("%d ", nums[i]);
		printf("\n");
	} else if(print.type == 3) {// read floats into a structure
		fread(&mynum, sizeof(float), print.size, fp);
		for(i = 0; i < print.size; i++)
			printf("%f ", mynum.num[i]);
		printf("\n");
	}
}

void readfile2() {
	FILE *fp = fopen("test.bin", "rb");

	read1(fp);
	read1(fp);

	fclose(fp);
}

void main() {
	writefile();
//	readfile();
	readfile2();
}