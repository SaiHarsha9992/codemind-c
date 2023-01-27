#include <stdio.h>
int main ( )
{
    int n , j = 0  , t ;
    scanf ( "%d" , &n );
    int a [ n ] ;
    for ( int i = 0 ; i < n ; i++ )
    {
        scanf ( "%d" , &a [ i ] ) ;
    }
    for ( int i = 0 ; i < n ; i++ )
    {
        if ( a [ i ] != 0 )
        {
           t = a [ i ] ;
           a [ i ] = a [ j ] ;
           a [ j ] = t ;
           j++ ;
        }
    }
    for ( int  i = 0 ; i < n ; i++ )
    {
        printf ( "%d " , a [ i ] ) ;
    }
}