#include <stdio.h>
int main ( )
{
    char s [ 100 ] ;
    scanf ( "%s" , s ) ;
    int x = 0 , y = 0 ;
    for ( int i = 0 ; s [ i ] != NULL ; i++ )
    {
        if ( s [ i ] == 'z' )
        {
            x++ ;
        }
        else
        {
            y++ ;
        }
    }
    if ( 2 * x == y  )
    {
        printf ( "Yes" ) ;
    }
    else
    {
        printf ( "No" ) ;
    }
}
