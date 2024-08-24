/*NEON NUMBER:
A number in which sum of digits of its square is the number itself,
then it is called neon number        eg 9*/
#include<stdio.h>
int main(){
	int n,sq,d,s=0;
	printf("Enter the number:");
	scanf("%d",&n);
	sq=n*n;
	while(sq>0){
		d=sq%10;
		s+=d;
		sq=sq/10;
	}
	if(s==n)
	    printf("%d is a neon number.",n);
	else
	printf("%d is not a neon number.",n);
}
