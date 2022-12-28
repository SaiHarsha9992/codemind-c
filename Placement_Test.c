#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,c,p;
        scanf("%d%d",&x,&y);
        c=x/10;
        p=c*y;
        printf("%d
",p);
    }
}