#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr,n,i,x,y=0;
	printf("Enter the number of elements.");
	scanf("%d",&n);
	ptr=(int *)malloc(n*sizeof(int));
	printf("Enter the elements.");
	for(i=0;i<n;i++){
		scanf("%d",(ptr+i));
	}
	printf("Enter the number to be searched.");
	scanf("%d",&x);
	for(i=0;i<n;i++){
		if(*(ptr+i)==x){
			printf("%d present at %d position",x,i+1);
			y++;
		}
	}
	if(y==0)
	printf("Number not found.");
	free(ptr);
	return 0;
}
