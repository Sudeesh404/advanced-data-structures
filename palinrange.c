#include<stdio.h>
int main()
{


int num,rem,temp,start,end,rev;
printf("enter the lower limit: ");
scanf("%d",&start);
printf("enter the upper limit: ");
scanf("%d",&end);
printf("palindrome within %d and %d are:",start,end);
for(num=start;num<=end;num++)
{

    temp=num;
    rev=0;
    while(temp)
        {
        rem=temp%10;
        temp=temp/10;
        rev=rev*10+rem;
    }
    if(num==rev)
    printf("%d ",num);
}
return 0;
}
