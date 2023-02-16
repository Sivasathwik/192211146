#include<stdio.h>
#include<string.h>
int main()
{
	char string[100];
	char *ptr;
	int i=0;
	printf("Enter the string :");
	gets(string);
	ptr=string;
	while(*ptr!='\0')
	{
		i++;
		ptr++;
	}
	printf("Length=%d",i);
}