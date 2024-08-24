#include<stdio.h>
struct book{
	char title[20],auther[20],sub[20];
	int id;
	float price;
};
struct book display();
int main(){
	struct book a;
	a=display();
	printf("\n------------------------------\n");
	printf("Book Title: %s\n",a.title);
	printf("Auther Name: %s\n",a.auther);
	printf("Subject: %s\n",a.sub);
	printf("Bool ID: %d\n",a.id);
	printf("Price: %.2f\n",a.price);
}
struct book display(){
		struct book s;
	printf("\nEnter book title:");
	scanf("%s",s.title);
	printf("\nEnter Auther Name:");
	scanf("%s",s.auther);
	printf("\nEnter Subject:");
	scanf("%s",s.sub);
	printf("\nEnter book id:");
	scanf("%d",&s.id);
	printf("\nEnter the price:");
	scanf("%f",&s.price);
	return s;
	}
