#include <stdio.h>
int main ( )
{
    int n , m = 0 ;
    scanf ( "%d" , &n ) ;
    int a [ n ] ;
    for ( int i = 0 ; i < n ; i++ )
    {
        scanf ( "%d" , &a [ i ] ) ;
    }
    for ( int i = 0 ; i < n ; i++ ) 
    {
        for ( int j = i ; j < n ; j++ )
        {
            if ( m < a [ j ] - a [ i ] )
            {
                m = a [ j ] - a [ i ] ;
            }
        }
    }
    printf ( "%d" , m ) ;
    return 0;
}