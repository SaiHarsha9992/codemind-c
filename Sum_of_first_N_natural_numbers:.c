#include<stdio.h>
void snn(int n)
{
    int c;
    c=n*(n+1)/2;
    printf("%d",c);
}
int main()
{
    int n;
    scanf("%d",&n);
    snn(n);
}