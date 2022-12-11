#include<stdio.h>
void tar(int a,int b,int c,int d);
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    tar(a,b,c,d);
}
void tar(int a,int b,int c,int d)
{
    if(a>=10&&b>=10&&c>=10&&d>=10)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}