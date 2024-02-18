// To Reverse an array
#include<stdio.h>
void main()
{
    int n,i,tmp;
    printf("Enter the Limit \n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the Values \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++)
    {
        tmp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=tmp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}