#include<stdio.h>
void are(int a,int b,int h)
{
    float c;
    c=0.5*(a+b)*h;
    printf("%0.4f",c);
}
int main()
{
    int a,b,h;
    scanf("%d%d%d",&a,&b,&h);
    are(a,b,h);
}