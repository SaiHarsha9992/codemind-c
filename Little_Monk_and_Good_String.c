#include <stdio.h>
int main ( )
{
    char s [ 100000 ] ;
    scanf ( "%s" , s ) ;
    int c = 0 , p = 0 ;
    for ( int i = 0 ; s [ i ] != NULL ; i++ )
    {
        if ( s [ i ] == 'a' || s [  i ] =='e' || s [ i ] == 'i' || s [ i ] =='o' || s [ i ] == 'u' )
        {
            c++ ;
        }
        else
        {
            if (c > p )
            {
                p = c;
            }
            c = 0 ;
        }
    }
    if( c > p )
    {
        p = c ;
    }
    printf ( "%d" , p ) ;
}