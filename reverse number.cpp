#include <stdio.h>
int main()
{
    int n, rev=0,remaider;
    printf("enter an integer");
    scanf("%d",&n);
    while (n!=0)
    {
          remainder=n%10;
          rev=rev*10+remainder;
          n/=10;
          }
          printf("reversed number=%d",reverse);
          return 0;
          }
