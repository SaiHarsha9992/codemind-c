#include<stdio.h>
float cen(int h)
{
    float c;
    c=2.54*h;
    return c;
}
int main()
{
    int h;
    scanf("%d",&h);
    float x=cen(h);
    printf("%0.2f",x);
}