#include<stdio.h>
void main()
{
    int a,b;
    printf("enter any number: \n");
    scanf("%d %d",&a,&b);
    printf("numbers before swapping a= %d and b= %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("numbers before swapping a= %d and b= %d\n",a,b);
    return 0;

}
