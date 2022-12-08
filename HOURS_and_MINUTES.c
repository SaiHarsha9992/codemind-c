#include<stdio.h>
int hours(int m)
{
    int c;
    c=m/60;
    return c;
}
int min(int m)
{
    int c;
    c=m%60;
    return c;
}
int main ()
{
	int m;
	scanf("%d",&m);
	int x=hours(m);
    int y=min(m);
	printf("%d Hour(s) %d Minute(s)",x,y);
}