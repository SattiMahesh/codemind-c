#include<stdio.h>
int main()
{
    int n,m,a[100],c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(int i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            printf("%d",i);
            c++;
        }
    }
    if(c==0)
    printf("-1");
}