// Program to Check the number is Armstrong or not
#include<stdio.h>
#include<conio.h>
void main()
{
int num,a,d,sum=0;
printf("Enter the num : ");
scanf("%d",&num);
clrscr();
a=num;
while(num>0)
{
d=num%10;
sum=sum+(d*d*d);
num = num/10;
}
if(a==sum)
{
printf("%d is an Armstrong  number \n",a);
}
else
{
printf("%d is not an Armstrong  number \n",a);
}
getch();
}
