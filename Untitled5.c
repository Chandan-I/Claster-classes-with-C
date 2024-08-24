#include<stdio.h>
#include<stdlib.h>
int main(){
	int *p,n;
	printf("Enter size of the array:\n");
	scanf("%d",&n);
	int i,j;
	p=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",&*(p+i));
	}
	printf("The Array is:\n");
	int max,min;
	for(i=0;i<n;i++){
		printf("%d\t",*(p+i));	
	}
	max=*(p+0);
	min=*(p+0);
	for(i=0;i<n;i++){
			if(max<*(p+i))
			max=*(p+i);
			if(min>*(p+i))
			min=*(p+i);
	}
	printf("\nMaximum is %d and Minimum is %d",max,min);
}
