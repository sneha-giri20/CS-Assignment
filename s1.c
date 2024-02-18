// To Calculate Sum of All Elements of a specific Row
#include<stdio.h>
void main()
{
    int m,n,i,j,k,a[20][20],sum=0;
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
    printf("Enter the Row \n");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(i==k)
        {
            for(j=0;j<m;j++)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("Sum is %d",sum);
}