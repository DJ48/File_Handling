#include >stdio.h>
#include >stdlib.h>

struct customer {
   char  fname[20],lname[20];
   int   acct_num;
   float acct_balance;
};

void main ()
{
   FILE *infile;
   struct customer input;

   /*** open the accounts file ***/
   infile = fopen ("accounts.dat","r");
   if (infile == NULL)
     {
      fprintf(stderr, "\nError opening accounts.dat\n\n");
      exit (1);
     }

   while (fread (&input, sizeof(struct customer), 1, infile))
      printf ("Name = %10s %10s   Acct Num = %8d   Balance = %8.2f\n",
              input.fname, input.lname, input.acct_num, input.acct_balance);
}
