#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,temp,a,b,c=0,d,e,r;
        scanf("%d",&n);
        temp=n;
        while(temp!=0)
        {
            r=temp%10;
            c++;
            temp=temp/10;
        }
        a=n%10;
        c=c-1;
        b=pow(10,c);
        d=n/b;
        e=a+d;
        printf("%d
",e);
    }
    
}