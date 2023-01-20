#include <stdio.h>
int main ( )
{
    int n ;
    scanf ( "%d" , &n ) ;
    int a [ n ] , t ;
    for ( int i = 0 ; i < n ; i++ )
    {
        scanf ( "%d" , &a [ i ] ) ;
    }
    for ( int i = 0 ; i < n ; i++ )
    {
        a [ i ] = a [ i ] * a [ i ] ;
    }
    for ( int i = 0 ; i < n ; i++ )
    {
        for ( int j = i + 1 ; j < n ; j++ )
        {
            if ( a [ i ] > a [ j ])
            {
                t = a [ i ] ;
                a [ i ] = a [ j ] ;
                a [ j ] = t ;
            }
        }
    }
    for ( int i = 0 ; i < n ; i++ )
    {
        printf ( "%d " , a [ i ] ) ;
    }
    
}