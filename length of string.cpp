#include<stdio.h>
#include<string.h>
int main()
{
	int length;
	char string[100];
	printf("enter the string :");
	scanf("%s",&string);
	length=strlen(string);
	printf("length  is %d",length);
	return 0;
}