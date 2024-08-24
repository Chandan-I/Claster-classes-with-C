#include<stdio.h>
void bmi(int w,float h){
	float a;
	a=(float)w/(h*h);
	if(a<18.5)
	printf("U");
	else if(a>=18.5 && a<25.0)
	printf("N");
	else if(a>=25.0 && a<30.0)
	printf("H");
	else
	printf("O");
}
int main(){
	int w;
	float h;
	scanf("%d %f",&w,&h);
	bmi(w,h);
}
