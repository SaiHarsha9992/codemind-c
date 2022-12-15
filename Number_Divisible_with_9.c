#include<stdio.h>
void div(int n)
{
    int c;
    c=n%9;
    if(c==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    div(n);
}