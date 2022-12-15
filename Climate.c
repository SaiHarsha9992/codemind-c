#include<stdio.h>
void horc(int t)
{
    if(t>20)
    {
        printf("HOT");
    }
    else
    {
        printf("COLD");
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    horc(t);
}