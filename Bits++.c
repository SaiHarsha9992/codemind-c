#include <stdio.h>
int main ( )
{
    int t , x = 0 ; 
    scanf ( "%d" , &t ) ;
    while ( t-- )
    {
      char s [ 100 ] ;
    scanf ( "%s" , s ) ;
    if ( s [ 1 ] == '+' )
    {
        x = x + 1 ;
    }
    else if ( s [ 1 ] == '-' )
    {
        x = x - 1 ;
    }
    }
    printf ( "%d
" , x ) ;
}