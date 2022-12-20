#include<stdio.h>
int main()
{
    int n,a,b,i;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    scanf("%d%d",&a,&b);
    int c=0;
    for(i=0;i<n;i++)
    {
       if(!(x[i]>=a && x[i]<=b))
        {
            printf("%d ",x[i]);
            c++;
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}