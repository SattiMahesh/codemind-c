#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,n,z;
    scanf("%d%d%d",&x,&y,&m);
    n=pow(x,y);
    z=n%m;
    printf("%d",z);
    return 0;
}