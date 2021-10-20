#include<stdio.h>
#include<conio.h>
int main()
{
    char name[30];
    printf("Enter the input : ");
    gets(name)
    int i,count=0;
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]==' '||name[i]=='\t')
        {
            count++;
        }
    }
    printf("Count = %d",count+1);

    getch();
    return 0;
}
