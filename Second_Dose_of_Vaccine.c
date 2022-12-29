#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int d,l,r;
        scanf("%d %d %d",&d,&l,&r);
        if(d<=r&&d>=l)
        {
            printf("Take second dose now
");
        }
        else if(d<r)
        {
            printf("Too Early
");
        }
        else if(d>l)
        {
            printf("Too Late
");
        }
    }
}