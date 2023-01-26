#include <stdio.h>
int main ( )
{
    int t ;
    scanf ( "%d" , &t ) ;
    while ( t-- )
    {
        int n ;
        scanf ( "%d" , &n ) ;
        int a [ 100 ] , t  , c = 0 , s ;
        for ( int i = 0 ; i < n ; i++ )
        {
           scanf ( "%d" , &a [ i ] ) ;
        }
        for ( int i = 0 ; i < n ; i++ )
        {
            for ( int j = i + 1 ; j < n ; j++ )
            {
                if ( a [ i ] > a[ j ] ) 
                {
                 t = a [ i ] ;
                a [ i ] = a [ j ] ;
                a [ j ] = t ;
                c++ ;   
                }
            }
        }
        if ( c == 0 )
        {
            printf ( "0
" ) ;
        }
        else
        {
            s = a [ n - 1 ] - a[ 0 ] ;
            printf ( "%d
" , s ) ;
        }
    }
}