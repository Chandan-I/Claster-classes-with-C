#include<stdio.h>
#include<string.h>
main(){
	char a[100];
	int i,n;
	printf("Enter the string:");
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++){
		if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
		a[i]='@';
		else if (a[i]==' ')
		a[i]='#';
		else 
		a[i]='$';
	}
	printf("\nAfter Change\n");
	puts(a);
}
