#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr,*p,*p1,r,c,i,j;
	printf("Enter row of the matrix.");
	scanf("%d",&r);
	printf("Enter columns of the matrix.");
	scanf("%d",&c);
	ptr=(int *)malloc(r*c*sizeof(int));
	p=(int *)malloc(r*c*sizeof(int));
	p1=(int *)malloc(r*c*sizeof(int));
	printf("Enter the elements of first matrix.");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		scanf("%d",(ptr+i*c+j));
	}
	}
	printf("first matrix\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		printf("%d\t",*(ptr+i*c+j));
    }
    printf("\n\n");
   }
   p=(int *)malloc(r*c*sizeof(int));
	printf("Enter the elements of second matrix.");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		scanf("%d",(p+i*c+j));
	}
	}
	printf("second matrix\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		printf("%d\t",*(p+i*c+j));
    }
    printf("\n\n");
}
    printf("Sum of the matrix:\n");
    for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		*p1=*(p+i*c+j)+*(ptr+i*c+j);
		printf("%d\t",*p1);
    }
    printf("\n\n");
   }
	free(ptr);
	free(p);
	free(p1);
	return 0;
}
