#include<stdio.h>
int fact();	
int main(){
	int n,s;
	printf("Enter n value:");
	scanf("%d",&n);
	s=fact(n);
	printf("factorial is %d",s);
}
int fact(int a){
	if(a>0)
	return a*fact(a-1);
	else
	return 1;
}
