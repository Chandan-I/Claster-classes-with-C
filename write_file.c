#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	FILE *fp;
	fp=fopen("chandu.txt","w");
	if(fp==NULL){
		printf("ERROR!");
		exit(1);
	}
	printf("Enter Number:");
	scanf("%d",&n);
	fprintf(fp,"%d",n);
	fclose(fp);
	return 0;
}
