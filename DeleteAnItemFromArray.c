#include<stdio.h>

void printnewarray(int arr[],int n)
{
    printf("the new array is ------\n");
    for(int i = 0; i<n; i++)
    {
        printf("array[%d] = %d\n",i,arr[i]);
    }
}

void DELETE(int a[], int n,int k,int item)
{
    item = a[k];
    for(int j = k; j <= n-1; j++)
    {
        a[j] = a[j+1];
    }
    n--;
    printnewarray(a,n);

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

    printf("enter the item to be delete : ");
    scanf("%d",&item);

    if(k<=n)
    {
        DELETE(array,n,k,item);
    }
    else
        printf("Warning! Position Kth value is greater than n.");

    return 0;
}
