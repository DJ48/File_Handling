#include <stdio.h>
#include <stdlib.h>

struct Employee {
   char  fname[20],lname[20];
   char  id[5];
   char company[10];
};

int main ()
{
   FILE *infile;
   struct Employee input;

   /*** open the accounts file ***/
   infile = fopen ("EmployeeDB.dat","rb");
   if (infile == NULL)
     {
      fprintf(stderr, "\nError opening accounts.dat\n\n");
      exit (1);
     }

   while (fread (&input, sizeof(struct Employee), 1, infile))
      printf ("Name = %10s %10s   ID = %s   Company = %s\n",
              input.fname, input.lname, input.id, input.company);
   return 0;
}
