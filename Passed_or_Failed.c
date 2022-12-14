#include<stdio.h>
void porf(int e,int m,int p,int c,int cs)
{
    if(e>30&&m>30&&p>30&&c>30&&cs>30)
    {
      printf("PASSED");
    }
    else
    {
        printf("FAILED");
    }
}
int main()
{
    int e,m,p,c,cs;
    scanf("%d%d%d%d%d",&e,&m,&p,&c,&cs);
    porf(e,m,p,c,cs);
}