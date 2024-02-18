// To calculate factorial of all elements in an array
#include<stdio.h>
int fact(int);
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
        printf("%d ",fact(a[i]));
    }
}
int fact(int x)
{
    int c,f=1;
    for(c=2;c<=x;c++)
    {
        f=f*c;
    }
    return f;
}