#include<stdio.h>
void eoro(int n)
{
    int rem;
    rem=n%2;
    if(rem==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    eoro(n);
}