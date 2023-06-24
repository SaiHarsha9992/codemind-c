#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n ;
        scanf("%d",&n);
        int temp = n;
        int r = 0 , s = 0 , f = 1;
        while(n!=0)
        {
            r = n%10;
            for(int i = 1 ; i <= r ; i++)
            {
                f = f *i;
            }
            s += f;
            f = 1;
            r = 0;
            n = n/10;
        }
        if(s == temp)
        {
            printf("Strong
");
        }
        else
        {
            printf("Not Strong
");
        }
    }
}