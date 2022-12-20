#include<stdio.h>
int main()
{
    int n,i,s=0,c;
    scanf("%d",&n);
    float a[n],ave;
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    ave=s/n;
    for(i=0;i<n;i++)
    {
        if(a[i]==ave)
        {
            c=1;
        }
    }
    if(c==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}