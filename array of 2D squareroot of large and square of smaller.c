#include<stdio.h>
#include<math.h>
main(){
	int r,c,*ptr,i,j;
	printf("Enter the rows and columns:");
	scanf("%d%d",&r,&c);
	ptr=(int*)malloc(r*c*sizeof(int));
    if(ptr==NULL){
    	printf("Error! memory not allocated");
    	exit(0);
	}
	for(i=0;i<r;i++)
	for(j=0;j<c;j++){
		scanf("%d",*(ptr+r*i+j));
	}
	for(i=0;i<r;i++)
	for(j=0;j<c;j++){
		printf("%d",*(ptr+r*i+j));
	}
}
