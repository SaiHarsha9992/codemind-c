#include<stdio.h>
int main()
{
	int a,b,e,f;
	scanf("%d%d",&a,&b);
	float c,d,g,h;
	scanf("%f%f",&c,&d);
	e=a+b;
	f=a-b;
	g=c+d;
	h=c-d;
	printf("%d %d
",e,f);
	printf("%0.1f %0.1f
",g,h);
}