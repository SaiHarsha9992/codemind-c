#include<stdio.h>
void nmoft(int n,int i)
{
    for(i=1;i<=n;i++)
    {
        printf("%d ",i*3);
    }
}
int main()
{
    int n,i;
    scanf("%d",&n);
    nmoft(n,i);
}