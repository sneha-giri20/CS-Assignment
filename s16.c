// To find sum of all elements in matrix using Functions
#include<stdio.h>
int sum(int [][50],int,int);
void main()
{
    int m,n,i,j,a[50][50];
    printf("Enter the Limit of the array \n");
    scanf("%d%d",&n,&m);
    printf("Enter the Values \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Sum is %d",sum(a,n,m));
}
int sum(int b[][50],int x,int y)
{
    int i,j,s=0;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            s=s+b[i][j];
        }
    }
    return s;
}