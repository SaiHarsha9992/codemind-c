#include <stdio.h>
int main ( )
{
    char s [ 100 ] ;
    scanf ( "%s" , s ) ;
    int c ;
    for ( int i = 0 ; s [ i ] != NULL ; i++ )
    {
        c = 0 ;
        for ( int j = 0 ; s [ j ] != NULL ; j++ )
        {
            if ( s [ i ] == s [ j ] ) 
            {
                c++ ;
            }
        }
        if ( c == 1 )
        {
            printf ( "%d" , i ) ;
            break ;
        }
    }
    if ( c != 1 )
    {
        printf ( "-1" ) ;
    }
}