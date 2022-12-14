#include<stdio.h>
void con(int a,int b,int c);
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    con(a,b,c);
}
void con(int a,int b,int c)
{
    if(a<=(1*b)+(2*c))
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}



