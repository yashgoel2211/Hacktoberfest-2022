//To compare 2 strings without using string handling functions

#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    int i,j,flag=0;
    char a[20],b[20];
    printf("Enter the string - A: ");
    gets(a);
    printf("Enter the string - B : ");
    gets(b);
    for(i=0;a[i]!='\0'&&b[i]!='\0';i++)
    {
        if(a[i]!=b[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0&&a[i]=='\0'&&b[i]=='\0')
    {
        printf("String is Equal");
    }
    else
    {
        printf("String is Different");
    }



    getch();
    return 0;
}
