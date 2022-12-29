#include<stdio.h>
int fun(int a)
{
	int temp,r,s=0;
	temp=a;
	while(a!=0)
	{
		r=a%10;
		s=s*10+r;
		a=a/10;
	}
	if(s==temp)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
int main()
{
	int n,i,a[100],c=0,x,m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		m=a[i];
		if(fun(m)==1)
		{
			c+=1;
		}
	}
	if(c==n)
	{
		printf("1");
	}
	else 
	{
		printf("0");
	}
}