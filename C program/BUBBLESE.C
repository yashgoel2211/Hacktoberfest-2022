#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],n,i,j,temp;
clrscr();
printf("Enter array size:");
scanf("%d",&n);
printf("Enter array elements:");
for(i=0;i<n;i++)
	scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
{
	for(j=0;j<n-i-1;j++)
	{
		if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
	}
}
printf("Array after sorting is ");
for(i=0;i<n;i++)
	printf("%d ",a[i]);
getch();
}