#include<stdio.h>
void fun(int a)
{
    int left=0,x,y,right=0,c=0;
    for(int i=a;left==0;i--)
    {
        c=0;
        for(int j=1;j<=i/2;j++)
        {
            if(i%j==0)
            c++;
        }
        if(c==1)
        {
            left=i;
            x=a-left;
            break;
        }
    }
    for(int i=a;right==0;i++)
    {
        c=0;
        for(int j=1;j<=i/2;j++)
        {
            if(i%j==0)
            c++;
        }
        if(c==1)
        {
            right=i;
            y=right-a;
            break;
        }
    }
    if(y>x || y==x)
    printf("%d
",left);
    else if( y<x )
    printf("%d
",right);
}
int main()
{
    int n,x;
    scanf("%d",&n);
    while(n)
    {
        scanf("%d",&x);
        fun(x);
        n--;
    }
}