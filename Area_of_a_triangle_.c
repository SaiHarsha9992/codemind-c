#include<stdio.h>
void are(int b,int h)
{
    int c;
    c=0.5*b*h;
    printf("%d",c);
}
int main()
{
    int b,h;
    scanf("%d%d",&b,&h);
    are(b,h);
}