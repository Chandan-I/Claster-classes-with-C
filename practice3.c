/*#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr,n,i;
	printf("Enter the number of elements.");
	scanf("%d",&n);
	ptr=(int *)malloc(n*sizeof(int));
	printf("Enter the elements.");
	for(i=0;i<n;i++){
		scanf("%d",(ptr+i));
	}
	for(i=0;i<n;i++){
		printf("%d\n",*(ptr+i));
	}
	free(ptr);
	return 0;
}*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr,*p,n,i;
	printf("Enter the number of elements.");
	scanf("%d",&n);
	ptr=(int *)malloc(n*sizeof(int));
	p=(int *)malloc(n*sizeof(int));
	printf("Enter the elements.");
	for(i=0;i<n;i++){
		scanf("%d",(ptr+i));
		*(p+i)=*(ptr+i);
	}
	free(ptr);
	printf("\nPrinting values from another pointer.\n");
	for(i=0;i<n;i++){
		printf("%d\n",*(p+i));
	}
	free(p);
	return 0;
}
