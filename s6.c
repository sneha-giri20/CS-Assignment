// To delete a Number from an array
#include<stdio.h>
void main()
{
    int a[100],n,i,num,flag=0,j;
    printf("Enter the Limit of an array \n");
    scanf("%d",&n);
    printf("Enter the Values \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the Number you want to delete \n");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(num==a[i])
        {
            flag=1;
            for(j=n-1;j>=i;j--)
            {
                a[i]=a[i+1];
            }
        }
    }
    if(flag==0)
    {
        printf("Number not Found");
    }
    else
    {
        for(i=0;i<n-1;i++)
        {
            printf("%d ",a[i]);
        }
    }
}