#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,k1=1,k2=2,k3=1,k4=0;
    scanf("%d",&n);
    for(i=1;i<=n+1;i++)
    {
        if(i%2!=0)
        {
           printf("%d ",k1);
           k1=k1+pow(2,k3);
           k3++;
        }
        else
        {
            printf("%d ",k2);
            k2=k2+6*pow(3,k4);
            k4++;
        }
    }
}