#include<stdio.h>
void main()
{
    int a[1000],i,j,n,b;
    printf("enter the number of elements in the array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter an integer of the array: ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]<a[j+1])
            {
                b=a[j];
                a[j]=a[j+1];
                a[j+1]=b;
            }
        }
    }
    puts("sorted array in descending order is");
    for(i=0;i<n;i++)
        printf("\n%d",a[i]);
}
