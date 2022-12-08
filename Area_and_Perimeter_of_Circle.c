#include<stdio.h>
#define PI 3.14
void are(int r)
{
    float c;
    c=PI*r*r;
    printf("%0.2f
",c);
}
void per(int r)
{
    float c;
    c=2*PI*r;
    printf("%0.2f",c);
}
int main()
{
    int r; 
    scanf("%d",&r);
    are(r);
    per(r);
}