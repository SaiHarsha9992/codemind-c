#include<stdio.h>
int fun(int n)
{
    int c=0,i=n,r;
    while(n!=0)
    {
        r=n%10;
        c=(c*10)+r;
        n=n/10;
    }
    int rev=0,ans,dup,r2;
    ans=i+c;
    dup=ans;
    while(ans!=0)
    {   
        r2=ans%10;
        rev=(rev*10)+r2;
        ans=ans/10;
    }
    if(dup==rev)
    {
        return rev;
    }
    else 
    {
        fun(dup);
    }
}
int main()
{
    int n,pali;
    scanf("%d",&n);
    pali=fun(n);
    printf("%d",pali);
}
