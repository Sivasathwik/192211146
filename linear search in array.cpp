#include<stdio.h>
int main()
{
	int i,j,n,a[20];
	printf("Enter number of elements :");
	scanf("%d",&n);
	printf("Enter array elements :\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("\n Enter element to search :");
	scanf("%d",&j);
	 for(i=0;i<n;i++)
	 if(a[i]==j)
	 
	 if(i<n)
	 printf("Elements found at index %d",i);
	 else
	 printf("Element  not found ");
	return 0;
}