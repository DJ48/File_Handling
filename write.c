#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// a structure to read and write
struct Employee {
   char  fname[20],lname[20];
   char  id[5];
   char company;
};

/**************************************/
int main ()
{
   FILE *outfile;
   struct Employee input;

   // open Accounts file for writing
   outfile = fopen ("EmployeeDB.dat","w");
   if (outfile == NULL)
     {
      fprintf(stderr, "\nError opening accounts.dat\n\n");
      exit (1);
     }

   // instructions to user
   printf("Enter \"stop\" for First Name to end program.");

   // endlessly read from keyboard and write to file
   while (1)
     {
      // prompt user
      printf("\nFirst Name: ");
      scanf ("%s", input.fname);
      // exit if no name provided
      if (strcmp(input.fname, "stop") == 0)
         exit(1);
      // continue reading from keyboard
      printf("Last Name : ");
      scanf ("%s", input.lname);
      printf("ID  : ");
      scanf ("%s", input.id);
      printf("Company   : ");
      scanf ("%s", input.company);

      // write entire structure to Accounts file
      fwrite (&input, sizeof(struct Employee), 1, outfile);
     }
     return 0;
}
