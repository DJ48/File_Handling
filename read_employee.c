#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee{
    char empid[5];
    char empname[20];
    char company;
};

int main(){
    struct Employee emp;
    int i;
    FILE *fp;
    fp=fopen("EmployeeDB","r");
    printf("Reading From EmployeeDB ...\n");
    fread(&emp,sizeof(struct Employee),1,fp);
    printf("%s\t%s\t%s",emp.empid,emp.empname,emp.company);
    fclose(fp);
    return 0;
}
