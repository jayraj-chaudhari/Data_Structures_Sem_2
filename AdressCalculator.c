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
    printf("Enter the index values of i and j to calculate their adress:");
    int i,j;
    scanf("%d%d",&i,&j);
    void* base = arr;
    void* calc_address = base + (i*10 + j)*sizeof(int);
    void* actual_adress = &arr[i][j];
    if(calc_address==actual_adress)
    {
        printf("Authentication Successful.Both adress are equal.");
    }
    else{
        printf("Authentication failed.");
    }
    /*
    printf("\nFor collumn major order");

    int arr[10][10];
    printf("Taking values in Column-Major order.");
    printf("\nEnter the values:");
    for(int j=0;j<10;j++)
    {
        for(int i=0;i<10;i++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter the index values of i and j to calculate their adress:");
    int i,j;
    scanf("%d%d",&i,&j);
    void* base = arr;
    void* calc_address = base + (j*10 + i)*sizeof(int);
    void* actual_adress = &arr[i][j];
    if(calc_address==actual_adress)
    {
        printf("Authentication Successful.Both adress are equal.");
    }
    else{
        printf("Authentication failed.");
    }
}
    */
}