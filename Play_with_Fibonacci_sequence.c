#include<stdio.h>
int main()
{
	int n,a=0,b=1,c,i,t;
	scanf("%d",&n);
	printf("0 1 ");
	for(i=1;i<n-1;i++)
	{
		c=a+b;
		printf("%d ",c);
		t=a;a=b;b=c;
	}
}