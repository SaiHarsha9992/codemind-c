#include<stdio.h>
int main()
{
    int n,i,f,s=0,r,temp;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        int i=1,f=1;
        r=n%10;
        while(i<=r)
        {
            f=f*i;
            i++;
        }
        s=s+f;
        n=n/10;
        
    }
    if(s==temp)
    {
        printf("The number %d is a strong number",temp);
    }
    else
    {
        printf("The number %d is not a strong number",temp);
    }
}