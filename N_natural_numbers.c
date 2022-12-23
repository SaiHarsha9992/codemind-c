#include<stdio.h>
void fnn(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    fnn(n);
}