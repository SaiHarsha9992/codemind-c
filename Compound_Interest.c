#include<stdio.h>
#include<math.h>
void ci(float p,float r,float t)
{
    float c;
    c=p*pow((1+(r/100)),t)-p;
    printf("%0.2f",c);
}
int main()
{
    float p,r,t;
    scanf("%f%f%f",&p,&r,&t);
    ci(p,r,t);
}