// To implement Matrix Multiplication
#include<stdio.h>
void main()
{
    int n1,n2,m1,m2,i,j,k,a[20][20],b[20][20],c[20][20]={0};
    printf("Enter the Limit of First Array \n");
    scanf("%d%d",&n1,&m1);
    printf("Enter the Limit of Second Array \n");
    scanf("%d%d",&n2,&m2);
    if(m1!=n2)
    {
        printf("Multiplication is not Possible \n");
    }
    else
    {    
        printf("Enter the Values of First Array \n");
        for(i=0;i<n1;i++)
        {
            for(j=0;j<m1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter Values of Second Array \n");
        for(i=0;i<n2;i++)
        {
            for(j=0;j<m2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<n1;i++)
        {
            for(j=0;j<m2;j++)
            {
                for(k=0;k<m1;k++)
                {
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        printf("Resultant Array is- \n");
        for(i=0;i<n1;i++)
        {
            for(j=0;j<m2;j++)
            {
                printf("%d ",c[i][j]);
            }
        }
    }    
}