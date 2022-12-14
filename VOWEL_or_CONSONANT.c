#include<stdio.h>
void vorc(char c)
{
    if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    {
        printf("VOWEL");
    }
    else
    {
        printf("CONSONANT");
    }
}
int main()
{
    char c;
    scanf("%c",&c);
    vorc(c);
}