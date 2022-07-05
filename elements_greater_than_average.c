#include<stdio.h>
int main()
{
    int n,i,sum=0,c=0,b;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    b=sum/n;
    for(i=0;i<n;i++)
    {
        if(arr[i]>=b)
        {
            c++;
        }
    
    }
printf("%d",c);
}