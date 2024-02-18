// To check whether Prime or not using function
#include<stdio.h>
void prime(int);
void main()
{
    int n;
    printf("Enter the Number \n");
    scanf("%d",&n);
    prime(n);
}
void prime(int x)
{
    int c,i=0;
    for(c=2;c<x;c++)
    {
        if(x%c==0)
        {
            i=i+1;
        }
    }
    if(i==0)
    {
        printf("It is a Prime Number ");
    }
    else
    {
        printf("It is not a prime Number");
    }
}