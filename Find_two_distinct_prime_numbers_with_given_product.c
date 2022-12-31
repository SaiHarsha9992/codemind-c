#include<stdio.h>
int prime(int a)
{
    int i,c=0;
    for(i=2;i<a/2;i++)
    {
        if(a%i==0)
        {
          return 0;   
        }
    }
    return 1;
}
int main()
{
    int n,c=0;
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(i*j==n)
            {
                if(prime(i)&&prime(j))
                {
                    printf("%d ",i);
                    c++;
                }
            }
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}