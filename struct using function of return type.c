#include<stdio.h>
struct std{
	char name[20];
	int roll;
	float avg;
};
struct std display();
int main(){
	struct std s;
	s=display();
	printf("\nName = %s",s.name);
	printf("\nRoll number = %d",s.roll);
	printf("\nAverage = %.2f",s.avg);
}
struct std display(){
	struct std x;
	printf("Enter name of the student:");
	scanf("%s",x.name);
	printf("Enter roll number:");
	scanf("%d",&x.roll);
	printf("Enter Average Marks:");
	scanf("%f",&x.avg);
	return x;
}
