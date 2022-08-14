#include<stdio.h>

int insertArray(int a[],int n,int k,int item)
{
    for(int j = n; j >= k; j--)
    {
        a[j+1] = a[j];
    }
    a[k] = item;
    n++;

    for(int i = 0; i<n;i++)
    {
        printf("array[%d] = %d \n",i,a[i]);

    }

}

int main()
{
    int array[100],k,n,item;
    printf("enter the number of element : ");
    scanf("%d",&n);

    printf("enter the array \n");
    for(int i = 0; i<n; i++)
    {
        printf("array[%d] = ",i);
        scanf("%d",&array[i]);
        printf("\n");
    }

    printf("the entered array is \n");
    for(int i = 0; i<n; i++)
    {
        printf("array[%d] = %d",i,array[i]);
        printf("\n");
    }

    printf("enter the Kth position of array = ");
    scanf("%d",&k);

    printf("enter the item to be insert : ");
    scanf("%d",&item);

    if(k<=n)
    {
        insertArray(array,n,k,item);
    }
    else
        printf("Warning! Position Kth value is greater than n.");

    return 0;

}
