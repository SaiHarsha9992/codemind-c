#include<stdio.h>
void coftt(int a,int b,int i)
{
    int c=0;
     for(i=a;i<=b;i++)
    {
        if(i%2==0&&i%3==0)
        {
            c++;
        }
    }
    printf("%d",c);
}
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    coftt(a,b,i);
}