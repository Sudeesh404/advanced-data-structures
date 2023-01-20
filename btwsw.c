#include<stdio.h>
#include<conio.h>
void bitwiseOR();
void bitwiseAND();
void bitwiseDifference();
void bitwiseEquality();
int s[10],s1[10],s2[10],s3[10],l1,l2,i,j;
void main()
{
    int choice=0;
    while(choice!=5)
    {
        printf("\nSelect your choice:\n");
        printf("\n 1.Union \n 2.Intersection \n 3.Difference \n 4.Equality \n 5.Exit ");
        printf("\n Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            bitwiseOR();
            break;
        case 2:
            bitwiseAND();
            break;
        case 3:
            bitwiseDifference();
            break;
        case 4:
            bitwiseEquality();
            break;
        case 5:
            exit(0);

        }
    }
}
void bitwiseOR()
{

    printf("\nEnter the size of the first set:\n");
    scanf("%d",&l1);
    printf("\nEnter the size of the second set:\n");
    scanf("%d",&l2);
    if(l1!=l2)
    {
        printf("\nTwo sets are not equal:\n");
        return 0;

    }
    printf("\nEnter the elements in the first set:");
    for(i=0;i<l1;i++)
    {
        scanf("%d",&s1[i]);

    }
    printf("\nEnter the elements in the second set: ");
    for(j=0;j<l2;j++)
    {
        scanf("%d",&s2[j]);
    }
    printf("\nUNION of the Set is:\n");
    for(i=0;i<l1;i++)
    {
        s[i]=s1[i]||s2[i];
        printf("%d",s[i]);
    }
}
void bitwiseAND()
{
    printf("\nEnter the size of the first set:\n");
    scanf("%d",&l1);
    printf("\nEnter the size of the second set:\n");
    scanf("%d",&l2);
    if(l1!=l2)
    {
        printf("\nTwo sets are not equal:\n");
        return 0;
    }
    printf("\nEnter the elements in the first set:\n");
    for(i=0;i<l1;i++)
    {
        scanf("%d",&s1[i]);

    }
    printf("\nEnter the elements in the second set:\n");
    for(j=0;j<l2;j++)
    {
        scanf("%d",&s2[j]);
    }
    printf("\n INTERSECTION of the Set is:\n");
    for(i=0;i<l1;i++)
    {
        s[i]=s1[i] && s2[i];
        printf("%d",s[i]);
    }
}
void bitwiseDifference()
{
    printf("\nEnter the size of the first set:\n");
    scanf("%d",&l1);
    printf("\nEnter the size of the second set:\n");
    scanf("%d",&l2);
    if(l1 != l2)
    {
        printf("\nThe two sets are not equal:\n");
        return 0;
    }
    printf("\n Enter the elements of the first set:\n");
    for(i=0;i<l1;i++)
    {
        scanf("%d",&s1[i]);
    }
    printf("\nEnter the elements of the second set:\n");
    for(j=0;j<l2;j++)
    {
        scanf("%d",&s2[j]);
    }
    printf("\nDIFFERENCE  of the set is:\n");
    for(i=0;i<l1;i++)
    {
        s3[i] != s2[i];

    }
    for(j=0;j<l2;j++)
    {
        s[j]=s1[j] && s3[j];
        printf("%d",s[j]);

    }
}
void bitwiseEquality()
{
    printf("\nEnter the size of the first set:\n");
    scanf("%d",&l1);
    printf("\nEnter the size of the second set:\n");
    scanf("%d",&l2);
    if(l1 != l2)
    {
        printf("\n Two sets are not equal\n:");
        return 0;
    }
    printf("\nEnter the elements in the first set:\n");
    for(i=0;i<l1;i++)
    {
        scanf("%d",&s1[i]);
    }
    printf("\nEnter the elements in the second set:\n");
    for(j=0;j<l2;j++)
    {
        scanf("%d",&s2[j]);

    }
    printf("\n EQUALITY of the set: ");
    for(i=0;i<l1;i++)
    {
        if(s1[i] != s2[i])
        {
            printf("\n The set are not equal \n");
            return 0;
        }
    }
    printf("\n The sets are equal \n ");

}
