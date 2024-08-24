#include<stdio.h>
main(){
	char a[50];
	printf("Enter the string:");
	scanf("%[^\n]%*c",a);
	int i=0;
	while(a[i]!='\0'){
		i++;
	}
	printf("%d",i);
}
