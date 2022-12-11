#include<stdio.h>
void sala(int bs);
int main()
{
    int bs;
    scanf("%d",&bs);
    sala(bs);
}
void sala(int bs)
{
    float da,hra,gs;
    if(bs<=10000)
    {
        da=(bs*80)/100;
        hra=(bs*20)/100;
        gs=bs+da+hra;
        printf("%.2f",gs);
    }
    else if(bs<=20000)
    {
        da=(bs*90)/100;
        hra=(bs*25)/100;
        gs=bs+da+hra;
        printf("%.2f",gs);
    }
    else
    {
        da=(bs*95)/100;
        hra=(bs*30)/100;
        gs=bs+da+hra;
        printf("%.2f",gs);
    }
}








