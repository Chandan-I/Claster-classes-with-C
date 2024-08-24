#include<conio.h>
#include<stdio.h>
void main(){
	struct emp{
		int eno;
		char ename[30];
		float sal;
	}e;
	FILE *fp;
	fp=fopen("employee.txt","r");
	printf("Enter Employee number:");
	scanf("%d",&e.eno);
	printf("Enter Employee name:");
	scanf("%s",e.ename);
	printf("Enter Employee Salary:");
	scanf("%f",&e.sal);
	fwrite(&e,sizeof(struct emp),1,fp);
	fclose(fp);
	printf("One Record is successfully stored in file employee:");
}
