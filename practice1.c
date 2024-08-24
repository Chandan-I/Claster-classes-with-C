#include<stdio.h>
int main(){
	int n;
	FILE *ptr;
	char c[n];
	printf("\nWriting new note in the doc.\n");
	printf("Enter the No. of character you want to read.");
	scanf("%d",&n);
	ptr=fopen("chandu.txt","w");
	printf("\nWrite your Content.\n");
	scanf("%s",c);
	fprintf(ptr,"%s",c);
	rewind(ptr);
	fclose(ptr);
	ptr=fopen("chandu.txt","r");
	printf("\nData in file.\n");
	if(fgets(c,n,ptr)!=NULL)
	   printf("%s",c);
	fclose(ptr);
	return 0;
}
