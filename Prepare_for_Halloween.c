#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,a,b;
        scanf("%d%d",&x,&y);
        a=2*x;
        b=5*y;
        if(a>b)
        {
            printf("Chocolate
");
        }
        else if(a<b)
        {
            printf("Candy
");
        }
        else if(a==b)
        {
            printf("Either
");
        }
    }
}