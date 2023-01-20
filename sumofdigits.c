#include<stdio.h>
int main()
{

    int i,r,n;
    int sum=0;
    printf("Enter any number: ");
    scanf("%d",&n);
    for(sum=0;n!=0;n=n/10)
    {
        r=n%10;
        sum=sum+r;

    }
    printf("Sum of numbers= %d",sum);
    return 0;
}
