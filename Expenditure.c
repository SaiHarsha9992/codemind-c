#include<stdio.h>
void expen(int x,int y);
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    expen(x,y);
}
void expen(int x,int y)
{
    if(x>=30*y)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}





