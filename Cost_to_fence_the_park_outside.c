#include<stdio.h>
int main()
{
    int l,b,w,cost,rate,area;
    scanf("%d%d",&l,&b);
    scanf("%d",&w);
    scanf("%d",&rate);
    area=((l+(2*w))*(b+(2*w)))-(l*b);
    cost=area*rate;
    printf("%d",cost);
    return 0;
    
}