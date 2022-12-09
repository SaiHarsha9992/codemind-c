#include<stdio.h>
void uorl(char c)
{
    if(c>='A'&&c<='Z')
    {
        printf("uppercase alphabet");
    }
    else if(c>='a'&&c<='z')
    {
        printf("lowercase alphabet");
    }
    else
    {
        printf("not an alphabet");
    }
}
int main()
{
    char c;
    scanf("%c",&c);
    uorl(c);
}