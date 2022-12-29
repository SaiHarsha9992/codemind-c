#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,k1,k2,k3=0,k4=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        {
           k1=1*pow(2,k3);
           printf("%d ",k1);
           k3++;
        }
        else
        {
            k2=1*pow(3,k4);
            printf("%d ",k2);
            k4++;
        }
    }
    
}