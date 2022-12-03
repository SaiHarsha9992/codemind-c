#include<stdio.h>
void area(int r)
{
    float A;
    A=3.14*r*r;
    printf("%0.2f",A);
}
int main()
{
    int r;
    scanf("%d",&r);
    area(r);
}