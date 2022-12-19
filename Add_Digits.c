#include<stdio.h>
int main()
{
    int n,i,s=0,r;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        s=s+r;
        n=n/10;
        if(n==0&&s>9)
        {
            n=s;
            s=0;
        }
    }
    printf("%d",s);
}