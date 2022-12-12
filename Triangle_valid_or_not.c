#include<stdio.h>
void validornot(int a,int b,int c)
{
   if(a+b>=c&&a+c>=b&&b+c>=a)
   {
       printf("Valid triangle");
   }
   else
   {
       printf("Invalid triangle");
   }
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    validornot(a,b,c);
}