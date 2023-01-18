#include <stdio.h>
int main ( )
{
    int  n , m ;
    scanf ( "%d %d" , &n , &m) ;
    int a [ n ] [ m ] , s = 0 ;
    for ( int i = 0 ; i < n ; i++ )
    {
        for ( int j = 0 ; j < m ; j++ )
        {
            scanf ( "%d" , &a [ i ] [ j ] ) ;
        }
    }
    for ( int i = 0 ; i < n ; i++ )
    {
        for ( int j = 0 ; j < m ; j++ )
        {
            s = s + a [ i ] [ j ] ;
        }
    }
    for ( int i = 1 ; i < n - 1 ; i++ )
    {
        for ( int j = 1 ; j < m - 1  ; j++ )
        {
            s = s - a [ i ] [ j ];
        }
    }
    printf ( "%d" , s ) ;
    
}