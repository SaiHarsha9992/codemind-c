#include<stdio.h>
int cap(int s,int t,int b)
{
    int c;
    c=s*t*b;
    return c;
}
int main()
{
    int s,t,b;
    scanf("%d%d%d",&s,&t,&b);
    int x=cap(s,t,b);
    printf("%dkb",x);
}