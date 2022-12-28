#include<stdio.h>
int main()
{
    int n,c,a,r,r1,s=0;
    scanf("%d",&n);
    r=n%1000;
    while(r!=0)
    {
        r1=r%10;
        s=s*10+r1;
        r=r/10;
    }
    a=n/1000;
    c=a*1000+s;
    printf("%d",c);
}