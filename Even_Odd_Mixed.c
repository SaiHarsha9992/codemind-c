#include<stdio.h>
int main()
{
    int n,e=0,o=0;
    scanf("%d",&n);
    while(n)
    {
        if(n%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
        n=n/10;
    }
    if(e>1&&o==0)
    {
        printf("Even");
    }
    else if(o>1&&e==0)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}