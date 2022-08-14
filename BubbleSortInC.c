#include<stdio.h>

void printTheSortedArray(int arr[],int n)
{
    printf("the sorted array is-------\n");
    for(int i = 0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}

void swap(int* i, int* j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
}

void BubbleSort(int arr[],int n)
{
    for(int i = 0; i<n-1; i++)
    {
        for(int j=0 ; j<n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}

int main()
{
    int array[100],n;
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("the size of the array %d\n",n );

    printf("enter the element of array:-------\n");
    for(int i = 0; i<n; i++)
    {
        printf("array[%d] = ",i);
        scanf("%d",&array[i]);
    }
    printf("the array is:--------\n");
    for(int i = 0; i<n; i++)
    {
        printf("array[%d] = %d\n",i,array[i]);
    }

    BubbleSort(array,n);

    printTheSortedArray(array,n);

}
