#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,r;
char ch;
clrscr();
printf("Enter the operation:");
scanf("%c",&ch);
printf("Enter two numbers:");
scanf("%f%f",&a,&b);
switch(ch)
{
	case '*':
		r=a*b;
		printf("%f*%f=%f",a,b,r);
		break;
	case '/':
		r=a/b;
		printf("%f/%f=%f",a,b,r);
		break;
	case '+':
		r=a+b;
		printf("%f+%f=%f",a,b,r);
		break;
	case '-':
		r=a-b;
		printf("%f-%f=%f",a,b,r);
		break;
}
getch();
}
