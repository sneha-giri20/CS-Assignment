// Fibonacci Series using functions
#include<stdio.h>
int fib(int);
void main()
{
    int n,i;
    printf("Enter Limit \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d ",fib(i));
    }
}
int fib(int x)
{
    if(x==0)
    {
        return 0;
    }
    else
    {
        if(x==1)
        {
            return 1;
        }
        else
        {
            return fib(x-1)+fib(x-2);
        }
    }
}