#include<stdio.h>
int main()
{
    int n,i,max;
    scanf("%d",&n);
    int a[n],c=0,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    for(i=max;;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
          if(i%a[j]==0)
        {
            c++;
        }    
        }
        if(c==n)
    {
        printf("%d",i);
        break;
    }
    }
    
}