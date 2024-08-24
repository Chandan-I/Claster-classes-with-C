#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr,*p,n,i,j,*temp;
	printf("Enter the number of elements.");
	scanf("%d",&n);
	ptr=(int *)malloc(n*sizeof(int));
	p=(int *)malloc(n*sizeof(int));
	printf("Enter the elements of first array.");
	for(i=0;i<n;i++){
		scanf("%d",(ptr+i));
	}
    printf("Enter the elements of second array.");
	for(i=0;i<n;i++){
		scanf("%d",(p+i));
	}
	printf("\nPrinting after swapping.\n");
	for(i=0;i<n;i++){
		*(ptr+i)=*(ptr+i)+*(p+i);
		*(p+i)=*(ptr+i)-*(p+i);
		*(ptr+i)=*(ptr+i)-*(p+i);
	}
	printf("\nElements of first array.\n");
	for(i=0;i<n;i++){
		printf("%d\n",*(ptr+i));
	}
    printf("\nElements of second array.\n");
	for(i=0;i<n;i++){
		printf("%d\n",*(p+i));
	}
	free(p);
	free(ptr);
	return 0;
}
