#include<stdio.h>
int main()
{
    int n,i,s;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("%d",min);
}