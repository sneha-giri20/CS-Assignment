// To print Secondary Diagonal Elements
#include<stdio.h>
void main()
{
    int n,i,j,a[100][100];
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
            if(i+j==n-1)
            {
                printf("%d ",a[i][j]);
            }
        }
    }
}