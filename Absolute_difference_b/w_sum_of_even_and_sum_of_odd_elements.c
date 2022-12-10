#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int s1=0,s2=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            s1=s1+a[i];
        }
        else
        {
            s2=s2+a[i];
        }
    }
    if(s1>s2)
    {
        printf("%d",s1-s2);
    }
    else
    {
        printf("%d",s2-s1);
    }
}