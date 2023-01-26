#include <stdio.h>
int main ( )
{
    int n ;
    scanf ( "%d" , &n ) ;
    int a [ n ] , c , p = 0 ;
    for ( int  i = 0 ; i < n ; i++ )
    {
        scanf ( "%d" , &a [ i ]  ) ;
    }
    for ( int  i = 0 ; i < n ; i++ )
    {
        c = 0 ;
        for ( int j = i + 1 ; j < n ; j++ )
        {
            if ( a [ i ] == a [ j ] && a [ j ] != 0 ) 
            {
                c++ ;
                a [ j ] = 0 ;
                break ;
            }
        }
        if ( c == 1 )
        {
            p++ ;
        }
    }
    printf ( "%d" , p ) ;
}