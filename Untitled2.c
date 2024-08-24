#include<stdio.h>
#include<stdlib.h>
int main(){
	int *p,i,j,r,c;
	printf("Enter rows and columns of the matrix:\n");
	scanf("%d %d",&r,&c);
//	int a[r][c];
	printf("Enter the matrix elements:");
	p=(int*)malloc(r*c*sizeof(int));
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",(p+i*c+j));
		}
	}
		printf("\nPrinting the matrix\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",*(p+i*c+j));
		}
		printf("\n");
	}
	printf("\nTranspose of the matrix\n");
	for(i=0;i<c;i++){
		for(j=0;j<r;j++){
			printf("%d\t",*(p+j*c+i));
		}
		printf("\n");
	}
}
