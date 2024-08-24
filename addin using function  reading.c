#include<stdio.h>
#include<stdlib.h>
int main(){
	int num1,num2,s;
	FILE *fptr;
	fptr=fopen("C:\\Users\\CHANDAN RAJ\\Desktop\\PSP\\add.txt","r");
	if(fptr==NULL){
		printf("Error!");
		exit(1);
	}
	fscanf(fptr,"\nAmount deposited by Ram : %d",&num1);
	printf("\nAmount deposited by Ram : %d",num1);
	fscanf(fptr,"\nAmount deposited by Shyam : %d",&num2);
	printf("\nAmount deposited by Shyam : %d",num2);
	fclose(fptr);
	return 0;
}
