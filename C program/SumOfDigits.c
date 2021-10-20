// Program to find sum of digits in a number
#include<stdio.h>
#include<conio.h>

void main()
{
//Declaring variables
int n,sum=0,a,d;
clrscr();
    
printf("Enter the number : ");
scanf("%d",&n);
a=n;
    
while(n>0)
{
d=n%10;
sum+=d;
n = n/10;
}
    
printf("Sum = %d",sum);
    
getch();
}
