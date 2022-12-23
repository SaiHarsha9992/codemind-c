#include<stdio.h>
void fofn(int n,int i)
{
    int f=1;
    for(i=1;i<=n;i++)
    {
       f=f*i;
    }
    printf("%d ",f);
}
int main()
{
    int n,i;
    scanf("%d",&n);
    fofn(n,i);
    
}