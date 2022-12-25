#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    if(n%10==0)
    {
        x=n/10;
        printf("%d",x);
    }
    else if(n%10==5)
        {
            x=n/10;
        printf("%d",x+1);  
        }
    else if(n%5==0)
    {
        x=n/5;
        printf("%d",x);
    }
    
    else
    {
        printf("-1");
    }
}