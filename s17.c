// To check if a matrix is lower triangular or not using functions
#include<stdio.h>
void utm(int [][50],int,int);
void main()
{
    int n,i,j,a[50][50];
    printf("Enter the Limit of the array \n");
    scanf("%d",&n);
    printf("Enter the Values \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    utm(a,n,n);
}
void utm(int b[][50],int x,int y)
{
    int i,j,flag=0;
    for(i=0;i<x;i++)
    {
        for(j=i+1;j<y;j++)
        {
            if(b[i][j]!=0)
            {
                flag=1;
            }
        }
    }
    if(flag==0)
    {
        printf("It is a lower triangular Matrix");
    }
    else
    {
        printf("It is not a lower triangular Matrix");
    }
}