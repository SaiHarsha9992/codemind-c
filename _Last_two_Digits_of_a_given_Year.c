#include<stdio.h>
void ln(int n)
{
    int c;
    c=n%100;
    printf("%0.2d",c);
}
int main()
{
    int n;
    scanf("%d",&n);
    ln(n);
}