#include <stdio.h>
int main ( )
{
    int t ;
    scanf ( "%d" , &t ) ;
    while ( t-- )
    {
        int n , a , b , k , c , d , e , f ;
        scanf ( "%d%d%d%d" , &n , &a , &b , &k ) ;
        c = a * b ;
        d = n / c ;
        e = n / a ;
        f = n / b ;
        if ( e + f - d >= k )
        {
            printf ( "Win
" ) ;
        }
        else
        {
            printf ( "Lose
" ) ;
        }
    }
}