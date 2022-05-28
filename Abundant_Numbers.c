#include<stdio.h>
int main()
{
    int n,i,fact=1,sum=0;
    scanf("%d",&n);
    for(i=fact;i<n;i++)
    {
        if(n%i==0)
        {
           sum=sum+i; 
        }
    }
    if(sum>n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}