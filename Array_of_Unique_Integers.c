#include<stdio.h>
int main()
{
    int n,a[n],i,c=0;
    float s=0,avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0],min=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
        else if(min>a[i])
        {
            min=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    s=s-max-min;
    avg=s/(n-2);
    printf("%0.5f",avg);
}