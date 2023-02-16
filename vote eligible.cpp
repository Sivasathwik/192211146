#include<stdio.h>
int main()
{
	int age;
	printf("Enter the age :");
	scanf("%d",&age);
	if(age>=18)
	printf("He is eligible to vote :");
	else
	printf("He is not eligible to vote still %d years left",18-age);
	return 0;
}