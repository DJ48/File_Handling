#include <stdio.h>
#include <stdlib.h>

struct Employee{
    char empid[5];
    char empname[20];
    char company[20];
    struct Employee *next;
};

typedef struct Employee emp;

int main()
{
    FILE *fp;
    emp *head=(emp *)malloc(sizeof(emp));
    fp=fopen("EmployeeDB","r");
    fread(head,sizeof(*head),1,fp);
    printf("\n--------------Printing Details--------------------\n");
    printf("\nEmployee ID:- %s",head->empid);
    printf("\tEmployee Name:- %s",head->empname);
            printf("\tEmployee company:- %s",head->company);
//     while((fread(head,sizeof(*head),1,fp)==1)){
//             printf("\nEmployee ID:- %s",head->empid);
//             printf("\tEmployee Name:- %s",head->empname);
//             printf("\tEmployee company:- %s",head->company);
//             head=head->next;
//     }
    fclose(fp);
    return 0;
}
