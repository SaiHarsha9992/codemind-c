#include<stdio.h>
void bill(int u);
int main()
{
    int u;
    scanf("%d",&u);
    bill(u);
}
void bill(int u)
{
    float r,sr,tr;
    if(u<200)
    {
        r=u*1.20;
    }
    else if(200<=u&&u<400)
    {
        r=u*1.50;
    }
    else if(400>=u&&u<600)
    {
        r=u*1.80;
    }
    else
    {
        r=u*2.00;
    }
    if(r>=400)
    {
        sr=(r*15)/100;
        tr=r+sr;
        printf("%.2f",tr);
    }
    else
    {
        tr=r+100;
        printf("%.2f",tr);
    }
}







