#include<stdio.h>
#include<conio.h>
int main(){
	int a[5],i;
	printf("enter element into the array:\n");
	for(i=0;i<5;i++){
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("\nthe element from the array displayed in the reverse order are:\n");
	for(i=4;i>=0;i--){
		printf("%d\t",a[i]);
	}
	 return 0;
}
