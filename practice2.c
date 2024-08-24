//reading last n character
#include<stdio.h>
int main(){
	int n;
	printf("Enter the No. of character you want to read.");
	scanf("%d",&n);
	FILE *ptr;
	n=n+2;
	char c[n];
	long l;
ptr=fopen("chandu.txt","r");
fseek(ptr,0,SEEK_END);
l=ftell(ptr);
fseek(ptr,(l-n),SEEK_SET);
	printf("\nData from end of file.\n");
	while(fgets(c,n,ptr)!=NULL)
	   printf("%s",c);
	fclose(ptr);
	return 0;
}
