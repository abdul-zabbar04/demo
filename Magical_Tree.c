#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int line=6+(n/2);
    int space=line-1, star=1;
    for(int k=1; k<=line; k++)
    {
        for(int i=1; i<=space; i++)
        {
            printf(" ");
        }
        for(int i=1; i<=star; i++)
        {
            printf("*");
        }
        printf("\n");
        space--;
        star+=2;
    }
    for(int k=1; k<=5; k++)
    {
        for(int i=1; i<=5; i++)
        {
            printf(" ");
        }
        for(int i=1; i<=n; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}