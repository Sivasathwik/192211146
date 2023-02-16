#include<stdio.h>
int main()
{
	int arr[100];
	int i,n;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
}