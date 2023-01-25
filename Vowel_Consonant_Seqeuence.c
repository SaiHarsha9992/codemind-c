#include <stdio.h>
int main ( )
{
    char s [ 100 ] ;
    scanf ( "%s" , s ) ;
    int c = 0 , v = 0 ;
    for ( int i = 0 ; s [ i ] != NULL ; i++ )
    {
        if ( s [ i ] == 'a' || s [ i  ] == 'e' || s [ i ] == 'i' || s [ i ] == 'o' || s [ i ] == 'u' )
        {
            v++ ;
            if ( v == 1 )
            {
                c = 0 ;
                printf ( "V" ) ;
            }
        }
        else
        {
            c++ ;
            if ( c == 1 )
            {
                v = 0 ;
                printf ( "C" ) ;
            }
        }
    }
}