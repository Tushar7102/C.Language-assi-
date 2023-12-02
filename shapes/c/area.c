#include<stdio.h>
#include<conio.h>
main()
{
	float pi=3.14;
	clrscr();
	float a, radius;
	printf("Enter vlaue :- ");
	scanf("%f",&radius);
	
	a=pi*radius*radius;
	
	printf("area is %f",a);
	
	getch();
}
