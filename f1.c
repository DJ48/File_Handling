// C program for writing 
// struct to file 
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

// a struct to read and write 
struct person 
{ 
	int id; 
	char fname[20]; 
	char lname[20]; 
}; 

int main () 
{ 
	FILE *outfile; 
	struct person input[2];
	// open file for writing 
	outfile = fopen ("person.dat", "w"); 
	if (outfile == NULL) 
	{ 
		fprintf(stderr, "\nError opend file\n"); 
		exit (1); 
	} 
		
	struct person input[0] = {1, "rohan", "sharma"}; 
	struct person input[1] = {2, "mahendra", "dhoni"}; 
	
	// write struct to file 
	fwrite (&input[0], sizeof(struct person), 1, outfile); 
	fwrite (&input[1], sizeof(struct person), 1, outfile); 
	
	if(fwrite != 0) 
		printf("contents to file written successfully !\n"); 
	else
		printf("error writing file !\n"); 

	// close file 
	fclose (outfile); 

	return 0; 
} 
