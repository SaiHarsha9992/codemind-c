#include <stdio.h>
int main ( )
{
    char s [ 100 ] ;
    scanf ( "%s" , s ) ;
    int  c = 0 ;
    if ( s [ 0 ] >= 97 && s [ 0 ] <= 122 )
    {
     for ( int i = 0 ; s [ i ] != NULL ; i++ )
     {
        if ( s [ i ] >= 65 && s [ i ] <= 90 )
        {
            c++ ;
        }
     }
     printf ( "%d" , c + 1  ) ;   
     }
     else
     {
         for ( int i = 0 ; s [ i ] != NULL ; i++ )
    {
        if ( s [ i ] >= 65 && s [ i ] <= 90 )
        {
            c++ ;
        }
    }
    printf ( "%d" , c ) ;
     }
}