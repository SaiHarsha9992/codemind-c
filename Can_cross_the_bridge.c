#include<stdio.h>
void bri(int x,int y,int z)
{
    int c;
    c=(z-y)/x;
    printf("%d",c);
}
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    bri(x,y,z);
}