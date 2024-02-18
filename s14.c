// Sort an array using Functions
#include<stdio.h>
void sort(int[],int);
void main()
{
    int n,i,a[100];
    printf("Enter the Limit \n");
    scanf("%d",&n);
    printf("Enter the Elements \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,n);
}
void sort(int b[],int x)
{
    int j,k,tmp;
    for(j=0;j<x;j++)
    {
        for(k=j+1;k<x;k++)
        {
            if(b[j]<b[k])
            {
                tmp=b[j];
                b[j]=b[k];
                b[k]=tmp;
            }
        }
        printf("%d ",b[j]);
    }
}