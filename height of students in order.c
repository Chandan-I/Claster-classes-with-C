#include<stdio.h>
main(){
	int a[6],b[5],c[11],i,j=0,temp;
	printf("Enter the height of student in Centimetre:\n");
	printf("Enter the student of Section A:");
	for(i=0;i<6;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the student of Section B:");
	for(i=0;i<5;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<6;i++){
		c[i]=a[i];
	}
	for(i=6;i<11;i++){
		c[i]=b[j];
		j++;
	}
	for(i=0;i<11;i++){
		printf("%d  ",c[i]);
	}
	printf("\n After arranging in height \n");
	for(i=0;i<11;i++)
		for(j=0;j<=i;j++)
			if(c[i]<c[j]){
			temp=c[i];
		    c[i]=c[j];
			c[j]=temp;
			}
			for(i=0;i<11;i++){
		printf("%d  ",c[i]);
	}
}
