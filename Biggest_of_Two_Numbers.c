#include<stdio.h>
int bors(int a,int b)
{
    int x;
    x=(a>b?a:b);
    printf("%d",x);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    bors(a,b);
}