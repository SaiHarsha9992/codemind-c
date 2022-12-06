#include<stdio.h>
void years(int d)
{
    int c;
    c=(d/365);
    printf("%d
",c);
}
void weeks(int d)
{
    int c;
    c=(d%365)/7;
    printf("%d",c);
}
int main()
{
    int d;
    scanf("%d",&d);
    years(d);
    weeks(d);
}