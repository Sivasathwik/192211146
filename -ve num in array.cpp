#include <stdio.h>
int main()
{
    int i,n,a[100],count=0;
    printf("enter the size of elements:");
    scanf("%d",&n);
   	printf("enter elements in array :\n");
    for(i=0;i<n;i++)
    {
    	printf("element-%d\n",i+1);
    	scanf("%d",&a[i]);
    
    }
    for(i=0;i<n;i++)
    
    	{
    		if(a[i]<0)
    	   count++;
        }
    	printf(" num of negitive elements are :%d\n",count);
	return 0;
}