#include<stdio.h>
int main()
{
    int arr[10];
    printf("\nEnter the values:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);     
    }
    int max = arr[0];
    int min = arr[0];
    for(int i=1;i<10;i++)
    {
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("\nMax element of array = %d \n Min element of array = %d",max,min);
    int avg=0;
    for(int i=0;i<10;i++)
    {
        avg+=arr[i];
    }
    avg/=10;
    printf("Average of all elements = %d",avg);
    printf("Enter the element to search:");
    int search;
    scanf("%d",&search);
    int flag=0;
    for(int i=0;i<10;i++)
    {
        if(arr[i]==search){
            printf("Element is present.");
            flag=1;
        }
    }
    if(flag==0){
        printf("Element is not present.");
    }
}