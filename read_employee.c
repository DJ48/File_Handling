#include <stdio.h>

struct Employee{
    char empid[5];
    char empname[20];
    char company;
};

int main(){
    struct Employee emp[3];
    int i;
    FILE *fp;
    fp=fopen("EmployeeDB","rb");
    printf("Reading From EmployeeDB ...\n");
    fread(&emp[0],sizeof(struct Employee),1,fp);
    printf("%s\t%s\t%s",emp[0].empid,emp[0].empname,emp[0].company);
    
    return 0;
}
