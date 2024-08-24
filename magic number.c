/*Magic number
1729
1+7+2+9=19
reverse of 19=91
19*91=1729
Ramanujan Number*/
#include<stdio.h>
int main(){
	int n,temp,rev=0,dig,s=0;
	printf("Enter the Number.");
	scanf("%d",&n);
	temp=n;
	while(temp>0){
		s+=temp%10;
		temp=temp/10;
	}
	temp=s;
	while(s>0){
		rev=rev*10+s%10;
		s=s/10;
	}
	if(n==temp*rev)
		printf("%d is a Magic number:",n);
	else
	printf("%d is not a Magic number:",n);
}
