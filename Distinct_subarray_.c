#include <stdio.h>
int main ( )
{
    int n , m , c = 0 ;
    scanf ( "%d%d" , &n , &m ) ;
    for ( int i = n ; i <= m ; i++ )
    {
        int s = 0 ;
        for ( int j = i ; j <= m ; j++ )
        {
            s = s + j ;
            if ( s % 2 != 0 )
            {
                c++;
            }
        }
    }
    printf("%d",c);
}