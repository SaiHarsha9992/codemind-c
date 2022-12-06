#include<stdio.h>
int hour(int s)
{
    int c;
    c=s/3600;
    return c;
}
int min(int s)
{
    int c;
    c=(s/60-(3600*(s/3600))/60);
    return c;
}
int sec(int s)
{
    int c;
    c=s-((3600*(s/3600))+(((s/60-(3600*(s/3600))/60))*60));
    return c;
}
int main()
{
    int s;
    scanf("%d",&s);
    int x=hour(s);
    int y=min(s);
    int z=sec(s);
    printf("H:M:S-%d:%d:%d",x,y,z);
    
}