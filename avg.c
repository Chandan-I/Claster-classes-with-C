#include<stdio.h>
int avg(int *p,int n){
	int i,s=0;
	for(i=0;i<n;i++){
		s+=*(p+i);
	}
	s=s/n;
	return s;
}
int main(){
	int n,*p,b;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	p=&a[0];
	b=avg(p,n);
	printf("%d",b);
}
