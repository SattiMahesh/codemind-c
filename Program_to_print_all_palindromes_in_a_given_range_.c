#include<stdio.h>
int main()
{
    int n,m,sum=0,r,i;
    scanf("%d %d",&n,&m);
    for(int i=n;i<=m;i++)
    {
        int l=i,sum=0;
        while(l!=0)
        {
            r=l%10;
            sum=sum*10+r;
            l=l/10;
        }
        if(sum==i)
        printf("%d ",i);
        
    }
}