#include<stdio.h>
void avg(int a,int b,int c)
{
    int n;
    n=3*c-(a+b);
    printf("%d",n);
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    avg(a,b,c);
}