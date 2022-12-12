#include<stdio.h>
void grade(int p,int c,int b,int m,int cs);
int main()
{
    int p,c,b,m,cs;
    scanf("%d%d%d%d%d",&p,&c,&b,&m,&cs);
    grade(p,c,b,m,cs);
}
void grade(int p,int c,int b,int m,int cs)
{
    int per,t;
    t=p+c+b+m+cs;
    per=(t*100)/500;
    if(per>=90)
    {
        printf("Grade A");
    }
    else if(per>=80)
    {
        printf("Grade B");
    }
    else if(per>=70)
    {
        printf("Grade C");
    }
    else if(per>=60)
    {
        printf("Grade D");
    }
    else if(per>=40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
}






