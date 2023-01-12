#include <stdio.h>
int main ()
{
    int n , i ;
    scanf( " %d ", &n );
    for( i = 1 ; i <= n ; i++ )
    {
        for(int j = 1 ; j <= i ; j++ )
        {
            if(j==1 || i==j || i==n )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("
");
    }
}