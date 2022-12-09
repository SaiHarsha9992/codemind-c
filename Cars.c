#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    c=n/4;
    if(n%4!=0)
    {
        c++;
    }
    printf("%d",c);
}