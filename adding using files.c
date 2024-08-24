#include<stdio.h>
#include<stdlib.h>
int main(){
	int num1,num2,s;
	FILE *fptr;
	fptr=fopen("C:\\Users\\CHANDAN RAJ\\Desktop\\PSP\\add.txt","w");
	if(fptr==NULL){
		printf("Error!");
		exit(1);
	}
	printf("Enter Amount deposited by Ram:");
	scanf("%d",&num1);
	printf("Enter Amount deposited by Shyam:");
	scanf("%d",&num2);
	fprintf(fptr,"\nAmount deposited by Ram : %d",num1);
	fprintf(fptr,"\nAmount deposited by Shyam : %d",num2);
	s=num1+num2;
	fprintf(fptr,"\nTotal amount deposited is %d",s);
	fclose(fptr);
	return 0;
}
