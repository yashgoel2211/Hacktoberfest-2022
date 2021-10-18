#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],n,i,j,temp,*p;
p=a;
clrscr();
printf("Enter array size:");
scanf("%d",&n);
printf("Enter array elements:");
for(i=0;i<n;i++)
	scanf("%d",p+i);
for(i=0;i<n-1;i++)
{
	for(j=0;j<n-i-1;j++)
	{
		if(*(p+j)>*(p+j+1))
			{
				temp=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=temp;
			}
	}
}
printf("Array after sorting is ");
for(i=0;i<n;i++)
	printf("%d ",*(p+i));
getch();
}