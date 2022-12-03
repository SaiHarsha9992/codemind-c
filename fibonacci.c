#include<stdio.h>
int main()
{
	int a=0,b=1,n,i,nt;
	scanf("%d",&n);
	printf("%d %d ",a,b);
	for(i=3;i<=n;i++)
	{
		nt=a+b;
		printf("%d ",nt);
		a=b;
		b=nt;
	}
}