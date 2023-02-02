#include <stdio.h>
int main ( )
{
    int  n ;
    scanf( "%d" , &n ) ;
    int a [ n ] , b [ n ] , i ;
    int c = 0 , d = 0 , m ;
    for ( i = 0 ; i < n ; i++ )
    {
        scanf ( "%d" , &a [ i ] ) ;
    }
    for ( i = 0 ; i < n ; i++ )
    {
        scanf( "%d" , &b [ i ] ) ;
    }
    for ( i =0 ; i < n ; i++ )
    {
        c += a [ i ] ;
        d += b [ i ] ;
    }
    m = d- c ;
    if ( m < 0 )
    {
        printf ( "0" ) ;
    }
    else
    {
        printf ( "%d" , m ) ;
    }
}