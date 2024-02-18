// To replace odd numbers with their squares in an array
#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,a[100];
    printf("Enter the Limit \n");
    scanf("%d",&n);
    printf("Enter the Values \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==1)
        {
            a[i]=pow(a[i],2);
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}