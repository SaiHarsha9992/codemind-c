#include<stdio.h>
int weird(int n);
int main()
{
    int n;
    scanf("%d",&n);
    int x=weird(n);
    if(x==0)
    {
        printf("weird");
    }
    else if(x==1)
    {
        printf("not weird");
    }
    else if(x==2)
    {
        printf("weird");
    }
    else
    {
        printf("not weird");
    }
}
int weird(int n)
{
    if(n%2==1)
    {
        return 0;
    }
    else
    {
        if(n>=2&&n<=5)
        {
            return 1;
        }
        else if(n>=6&&n<=20)
        {
            return 2;
        }
        else
        {
            return 3;
        }
    }
}

