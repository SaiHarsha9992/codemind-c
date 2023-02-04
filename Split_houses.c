#include <stdio.h>
int main ( )
{
    int n , c = 0 ;
    scanf ( "%d" , &n ) ;
    char s [ n ] ;
    scanf ( "%s" , s ) ;
    for ( int i = 0 ; i < n ; i++ )
    {
        if ( s [ i ] == 'H' && s [ i + 1 ] == 'H' ) 
        {
            c = 1 ;
        }
        else
        {
            if ( s [ i ] == '.' ) 
            {
                s [ i ] = 'B' ;
            }
        }
    }
    if ( c == 1 )
    {
        printf ( "NO" ) ;
    }
    else
    {
        printf ( "YES
" ) ;
        printf ( "%s
" , s ) ;
    }
}