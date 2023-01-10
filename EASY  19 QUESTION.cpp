#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	int a,b,*c,*d;
	scanf("%d%d",&a,&b);
	c=&a,d=&b;
	if(*c>*d)
	printf("%d is greater number",a);
	else
	printf("%d is a greater number",b);
	return 0;
}

