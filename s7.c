// To insert a Number in an array
#include<stdio.h>
void main()
{
    int a[100],n,i,x,idx;
    printf("Enter the Limit of an array \n");
    scanf("%d",&n);
    printf("Enter the Values \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the Number you want to insert and Index Number \n");
    scanf("%d%d",&x,&idx);
    for(i=n;i>=idx;i++)
    {
        a[i+1]=a[i];
    }
    a[idx]=x;
    for(i=0;i<n+1;i++)
    {
        printf("%d ",a[i]);
    }
}