// Sum of series 1+(1*2)+(1*2*3)+------n termsusinf functions
#include<stdio.h>
int series(int);
void main()
{
    int n,sum=0,i;
    printf("Enter Limit \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+series(i);
    }   
    printf("Sum is %d",sum);
}
int series(int x)
{
    if(x==1)
    {
        return 1;
    }
    else
    {
        return x*series(x-1);
    }
}