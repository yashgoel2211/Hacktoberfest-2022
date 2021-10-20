// Program to find smallest number in an array
#include<stdio.h>
#include<conio.h>

void main()
{
//Declaring variables
int a[10],n,i,min;
clrscr();
printf("Enter the number of elements : ");
scanf("%d",&n);
printf("Enter the elements : ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<n;i++)
{
if(min>a[i])
{
min=a[i];
}
}
printf("Smallest number : %d",min);
getch();
}
