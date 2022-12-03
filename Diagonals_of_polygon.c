#include<stdio.h>
void diagonal(int n)
{
    int d;
    d=n*(n-3)/2;
    printf("%d",d);
}
int main()
{
    int n;
    scanf("%d",&n);
    diagonal(n);
}