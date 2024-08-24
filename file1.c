//Writing and appending the integers.
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	FILE *fp;
	fp=fopen("chandu.txt","a");
	printf("Enter a Number:");
	scanf("%d",&n);
	fprintf(fp,"Number=%d\n",n);
	fclose(fp);
}
