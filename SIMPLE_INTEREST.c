#include<stdio.h>
void si(int p,int r,int t)
{
    int S;
    S=(p*r*t)/100;
    printf("%d",S);
}
int main()
{
    int p,r,t;
    scanf("%d%d%d",&p,&r,&t);
    si(p,r,t);
}