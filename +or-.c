#include<stdio.h>
int main()
{

    int n;
    printf("enter a number:\n");
    scanf("%d",&n);
    switch(n>0)
    {
        case 1:
            printf("The number %d is positive",n);
        break;
        case 0:
        switch(n<0)
        {
            case 1:
              printf("The number %d is negative",n);
                break;
            case 0:
                printf("the number is zero");
                break;
            }
            break;
   }
   return 0;
}
