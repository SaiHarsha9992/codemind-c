#include<stdio.h>
int main()
{
    int n,r,sum=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        printf("%d",r);
        n=n/10;
    }
}