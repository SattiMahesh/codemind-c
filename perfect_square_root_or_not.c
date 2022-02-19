#include<stdio.h>
#include<math.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    m=sqrt(n);
    if(n%m==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}