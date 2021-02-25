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

emp *createnode(){
    emp *newnode = (emp *)malloc(sizeof(emp));
    printf("Enter the Employee Id:- ");
    scanf("%s",newnode->empid);
    printf("Enter the Name:- ");
    scanf("%s",newnode->empname);
    printf("Enter the company:- ");
    scanf("%s",newnode->company);
    newnode->next=NULL;
    return newnode;
}

void create(){
    int i;
    for(i=0;i<10;i++){
        if(i==0){
            head=createnode();
        }
        else{
            emp *temp=head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next=createnode();
        }
    }
}

int main()
{
    File *fp;
    printf("Start writing into file\n");
    create();
    
    fp=fopen("EmployeeDB","wb");
    fwrite(&head,sizeof(head),1,fp);
    printf("writing Done into EmployeeDB\n");
    fclose(fp);
    return 0;
}
