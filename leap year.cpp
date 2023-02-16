#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year :");
	scanf("%d",&year);
	if(year%400==0)
	{

	printf("%d is a leap a year \n",year);
}
	else if(year%100==0)
	{

	printf("%d is not leap a year\n ",year);
		}
	else if(year%4==0)
	{
	
	printf("%d is leap a year \n",year);
	}
	else 
	{

	printf("%d is a not leap year \n",year);
		}
     return 0;
}