#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c=0,r,i;
        scanf("%d%d",&a,&b);
        for(i=a;i<=b;i++)
        {
            r=i%10;
            if(r==2||r==3||r==9)
            {
                c++;
            }
        }
        printf("%d
",c);
    }
}