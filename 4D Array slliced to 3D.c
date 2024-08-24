#include<stdio.h>
#include<stdlib.h>
int main() {
    int a, b, c, d;
    int i,j,k,l;
    printf("Enter the dimensions of the 4D array (a b c d): ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int arr[a][b][c][d];
    // Create the 4D array
    for(i=0;i<a;i++)
    for(j=0;j<b;j++)
	for(k=0;k<c;k++)
	for(l=0;l<d;l++){
		scanf("%d",&arr[i][j][k][l]);
	}
	printf("The sliced array with dimensions(%d,%d,%d) is:\n",b,c,d);
for(i=0;i<1;i++){
    for(j=0;j<b;j++){
	for(k=0;k<c;k++){
	for(l=0;l<d;l++){
		printf("%d\t",arr[i][j][k][l]);
	}
	printf("\n");
}
printf("\n");
}
printf("\n");
}
}
