#include<stdio.h>
main(){
	int a,b;
	printf("Enter 1st number.\n");
	scanf("%d",&a);
	printf("Enter 2nd number.\n");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After Swapping.\n");
	printf("Value of 1st number=%d\n",a);
	printf("Value of 2nd number=%d",b);
}