#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,j=0,x=0;
    printf("\n==================================\n");
    printf("\n\tEnter a Row and Column Size  =  ");
    scanf("%d",&x);
    printf("\n\n");
    for(i=1;i<=x;i++)
    {

        for(j=1;j<=x;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    printf("\n==================================");
    getch();
    return 0;
}
