#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee{
    char empid[5];
    char empname[20];
    char company;
};

int main(){
    struct Employee emp[3];
    int i;
    FILE *fp;
    fp=fopen("EmployeeDB","w");
    for(i=0;i<3;i++){
        printf("\nEnter Id:- ");
        scanf("%s",&emp[i].empid);
        printf("\nEnter Name:- ");
        scanf("%s",&emp[i].empname);
        printf("\nEnter Company Name:- ");
        scanf("%s",&emp[i].company);
        fwrite(&emp[i],sizeof(struct Employee),1,fp);
    }
    printf("Writing into EmployeeDB Done....\n");
    fclose(fp);
    return 0;
}
