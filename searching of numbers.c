#include<stdio.h>
main(){
	int a[100],n,i,x,count=0;
	printf("Enter the size of array.");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\nEnter which value you want to find:");
	scanf("%d",&x);
	for(i=0;i<n;i++){
		if(a[i]==x){
		count++;
		printf("\n%d is %d times available in the Array\n",x,count);
		}
	}
}
