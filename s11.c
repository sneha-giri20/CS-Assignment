// Palemdrom Using Function
#include<stdio.h>
void pal(int);
void main()
{
    int n;
    printf("Enter the Number \n");
    scanf("%d",&n);
    pal(n);
}
void pal(int x)
{
    int sum=0,num;
    num=x;
    while(x>0)
    {
        sum=sum*10+x%10;
        x=x/10;
    }
    if(sum==num)
    {
        printf("It is a Palendrom");
    }
    else
    {
        printf("It is not a Palendrom");
    }
}