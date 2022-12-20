#include<stdio.h>
int main()
{
    int n,i,a[n],s=0,x,y;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&x,&y);
    for(i=0;i<n;i++)
    {
        if(!(a[i]>=x && a[i]<=y))
        {
            s=s+a[i];
        }
    }
    printf("%d",s);
}