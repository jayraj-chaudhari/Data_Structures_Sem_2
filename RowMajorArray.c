#include<stdio.h>
int main()
{
    int arr[10][10];
    printf("Taking values in Row-Major order.");
    printf("\nEnter the values:");
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nPrinting the array:\n");
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}