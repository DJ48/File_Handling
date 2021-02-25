#include <stdio.h>
#include <stdlib.h>

struct Employee{
    char empid[5];
    char empname[20];
    char company[20];
    struct Employee *next;
};

typedef struct Employee emp;
emp *head=NULL;

int main()
{
    FILE *fp;
    
    fp=fopen("EmployeeDB","rb");
    fwrite(&head,sizeof(head),1,fp);
    printf("\n--------------Printing Details--------------------\n");
    while(head != NULL){
        printf("\nEmployee ID:- %s",head->empid);
        printf("\tEmployee Name:- %s",head->empname);
        printf("\tEmployee company:- %s",head->company);
        head=head->next;
    }
    fclose(fp);
    return 0;
}
