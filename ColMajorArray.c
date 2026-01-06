#include<stdio.h>
int main()
{
    int arr[10][10];
    printf("Taking values in column-Major order.");
    printf("\nEnter the values:");
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            scanf("%d",&arr[j][i]);
        }
    }
    printf("\nPrinting the array:\n");
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
}