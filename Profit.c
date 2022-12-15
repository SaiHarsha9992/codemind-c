#include<stdio.h>
void porl(int cp,int sp)
{
    if(sp>cp)
    {
        printf("Profit");
    }
    else
    {
        printf("Loss");
    }
}
int main()
{
    int cp,sp;
    scanf("%d%d",&cp,&sp);
    porl(cp,sp);
}