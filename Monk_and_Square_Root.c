#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int a,b,c=0,i;
        scanf("%lld%lld",&a,&b);
        for(i=0;i<b;i++)
        {
            if(i*i%b==a)
            {
                printf("%lld
",i);
                c++;
                break;
            }
        }
        if(c==0)
    {
        printf("-1
");
    }
    }
}