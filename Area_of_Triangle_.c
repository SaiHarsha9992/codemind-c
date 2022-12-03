#include<stdio.h>
#include<math.h>
void area(float a,float b,float c,float s)
{
    float x;
    x=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%0.2f",x);
}
int main()
{
    float a,b,c,s;
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)*0.5;
    area(a,b,c,s);
}