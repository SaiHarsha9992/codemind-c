#include<stdio.h>
void fnon(int n,int i)
{
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
        }
    }
}
int main()
{
    int n,i;
    scanf("%d",&n);
    fnon(n,i);
}