#include<stdio.h>
int fun(int i)
{
    int r,x,c=0,v=0,a;
    a=i;
    while(i!=0)
    {
        r=i%10;
        v++;
        if(r!=0&&a%r==0)
        {
            c++;
        }
        i=i/10;
    }
    if(v==c)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(fun(i))
        {
            printf("%d ",i);
        }
    }
}