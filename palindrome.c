#include<stdio.h>
fun(int n){
	int a,s=0,m;
	m=n;
	while(n!=0){
		a=n%10;
		s=s*10+a;
		n=n/10;
	}
	if(s==m)
	printf("%d is a palindrome number.",m);
	else
	printf("%d is not a palindrome number.",m);
}
main(){
	int a;
	printf("Enter the number.");
	scanf("%d",&a);
	fun(a);
}
