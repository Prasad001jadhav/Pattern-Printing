#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,j=0,iNo=0;
    printf("\n Enter a Number = ");
    scanf("%d",&iNo);

    printf("\n      \n\n");

    for(i=1;i<=iNo;i++)
    {
        for(j=1;j<=iNo;j++)
        {
            if(j<= 6-i)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
