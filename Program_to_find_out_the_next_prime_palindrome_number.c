#include<stdio.h>
int prime(int a)
{
    int i,c=0;
    for(i=1;i<a/2;i++)
    {
        if(a%i==0)
        {
            c++;
        }
    }
    if(c==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int pali(int a)
{
    int r,t,s=0;
    t=a;
    while(a!=0)
    {
        r=a%10;
        s=s*10+r;
        a=a/10;
    }
    if(s==t)
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
    int n,i,right=0;
    scanf("%d",&n);
    if(n>=10)
    {
       for(i=n+1;right==0;i++)
       {
           if(prime(i)==1)
           {
               if(pali(i)==1)
               {
                   right=i;
                   break;
               }
           }
       }
       printf("%d",right);
    }
}