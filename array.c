#include<stdio.h>
int main()
{

    int arr[20], i, n ;
    printf("Enter the number of items in the array: ");
    scanf("%d", &n );
    if(n<=21)
    {

    printf("Enter the elements of array: ");

        for(i=0;i<n;i++)
        {

            scanf("%d", &arr[i] );

        }


    printf("The array is: ");

        for( i=0; i<n; i++)
        {

            printf("%d ", arr[i]);
        }
    }else
        printf("\n%d exceeds size of the array!!\n", n );
        return 0;
}
