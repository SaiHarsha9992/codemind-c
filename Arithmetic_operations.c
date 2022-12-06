#include<stdio.h>
void add(int a,int b)
{
    int c;
    c=a+b;
    printf("Sum:%d
",c);
}
void sub(int a,int b)
{
    int c;
    c=a-b;
    printf("Difference:%d
",c);
}
void mul(int a,int b)
{
    int c;
    c=a*b;
    printf("Product:%d
",c);
}
void quo(int a,int b)
{
    int c;
    c=a/b;
    printf("Quotient:%d
",c);
}
void rem(int a,int b)
{
    int c;
    c=a%b;
    printf("Remainder:%d
",c);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    add(a,b);
    sub(a,b);
    mul(a,b);
    quo(a,b);
    rem(a,b);
}