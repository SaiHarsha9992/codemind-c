#include<stdio.h>
int main()
{
	int n,i,sqn,sum=0,s=0,sq;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sqn=i*i;
		sum=sum+sqn;
		s=s+i;
		sq=s*s;
		
	}
	printf("%d ",sq-sum);
}