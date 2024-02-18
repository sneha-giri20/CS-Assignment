#include <stdio.h>
void large(int[][50], int, int);
void main()
{
    int m,n,a[50][50];
    printf("Enter the number of rows and column: \n");
    scanf("%d %d",&m,&n);
    printf("\nEnter the elements of the matrix: \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    large(a,m,n);
}
void large(int b[][50],int x,int y)
{
    int i = 0, j;
    int max = 0;
    int res[x];
    while (i < x)
    {
       for ( j = 0; j < y; j++)
       {
           if (b[i][j] > max)
           {
              max = b[i][j];
           }
        }
        res[i] = max;
        max = 0;
        i++;
    }
    for(int i = 0; i < y; i++)
    {
       printf("Largest element in row %d is %d \n", i, res[i]);
    }
}