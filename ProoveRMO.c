#include<stdio.h>
int main()
{
    int arr[3][3];
    printf("Taking values in Row-Major order.");
    printf("\nEnter the values:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Printing the memory adressed of array from 0x0 to 0x1 order till end:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Adress at %d x %d is %d\n",i,j,&arr[i][j]);
        }
    }
}