#include<stdio.h>
void gs(float bs,float hra,float da,float pf)
{
    float c;
    c=bs+hra+da+pf;
    printf("%0.2f",pf);
    printf("
%0.2f",c);
}
int main()
{
    float bs,hra,da,pf;
    scanf("%f%f%f",&bs,&hra,&da);
    pf=bs*0.12;
    gs(bs,hra,da,pf);
   
}