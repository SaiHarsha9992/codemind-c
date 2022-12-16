#include<stdio.h>
int main()
{
    int n,sq1,s=0,r,sq2,t,f=0;
    scanf("%d",&n);
    sq1=n*n;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        s=(s*10)+r;
    }
    sq2=s*s;
    while(sq2!=0)
    {
        t=sq2%10;
        sq2=sq2/10;
        f=(f*10)+t;
    }
    if(f==sq1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}