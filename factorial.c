#include<stdio.h>
int fact(int n){
     int i,x=1;
     for(i=1;i<=n;i++){
     	x=x*i;
	 }
	 return x;
}
int main(){
	int n,a;
	printf("Enter the number:");
	scanf("%d",&n);
	a=fact(n);
	printf("Factorial of %d is %d",n,a);
}
