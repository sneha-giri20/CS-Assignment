// Max sum of an individual row
#include<stdio.h>
void main()
{
    int n,i,j,a[100][100],sum=0,max=0;
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
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            sum=sum+a[i][j];
        }
        if(max<sum)
        {
            max=sum;
        }
    }
    printf("Max sum of Individual Row is %d",max);
}