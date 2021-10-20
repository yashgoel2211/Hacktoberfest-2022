#include<stdio.h>
#include<string.h>
#include<conio.h>

int sum(a)
{
    if(a==0)
        return 0;
    else
        return (a+sum(a-1));
}

int main()
{
    int a;
    printf("Enter value : ");
    scanf("%d",&a);
    printf("Sum : %d ",sum(a));
    getch();
    return 0;
}

