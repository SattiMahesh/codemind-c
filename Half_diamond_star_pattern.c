#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    if(3<=n&&n<=100 )
    {
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("
");
    }
    for(i=(n-1);i>=1;i--)
    {
       for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("
");
    }
    }
    else
    {
        printf("The pattern is not possible");
    }
}