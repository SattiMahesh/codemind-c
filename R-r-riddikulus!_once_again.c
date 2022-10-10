#include<stdio.h>
int main()
{
	int k,n,a[100],j;
	scanf("%d%d",&k,&n);
	for(int j=0;j<k;j++)
	{
		scanf("%d",&a[j]);
	}
	for(int i=0;i<n;i++)
	{ int p=a[0];
		for(j=0;j<k;j++)
		{
		  a[j]=a[j+1];	
		}
		a[k-1]=p;
	}
	for(int j=0;j<k-1;j++)
	{
		printf("%d ",a[j]);
	}
    printf("%d",a[k-1]);
}