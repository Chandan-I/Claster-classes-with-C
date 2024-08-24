#include<stdio.h>
#include<stdlib.h>
int main(){
	int num;
	FILE *fptr;
	fptr=fopen("C:\\SA\\DataFiles\\Sree.txt","w");
	if(fptr==NULL){
		printf("Error!");
		exit(1);
	}
	fscanf(fptr,"%d",&num);
	printf("Value of num is : %d",num);
	fclose(fptr);
	return 0;
}
