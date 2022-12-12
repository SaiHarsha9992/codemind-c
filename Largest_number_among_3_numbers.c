#include<stdio.h>
void lar(int a,int b,int c);
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    lar(a,b,c);
}
void lar(int a,int b,int c)
{
     if(a>b&&a>c)
    {
        printf("%d",a);
    }
    else if(b>a&&b>c)
    {
        printf("%d",b);
    }
    else
    {
        printf("%d",c);
    }
}





