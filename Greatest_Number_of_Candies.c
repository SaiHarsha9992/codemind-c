#include <stdio.h>
int main ( )
{
    int n , ec , max = 0;
    scanf ( "%d" , &n ) ;
    int c [ n ] ;
    for ( int i = 0 ; i < n ; i++ )
    {
        scanf ( "%d" , &c [ i ] ) ;
    }
    scanf ( "%d" , &ec ) ;
    for ( int i = 0 ; i < n ; i++ )
    {
        if ( c [ i ] > max )
        {
            max = c [ i ] ;
        }
    }
    for ( int i = 0 ; i < n ; i++ )
    {
        if ( c [ i ] + ec >= max ) 
        {
            printf ( "True " ) ;
        }
        else
        {
            printf ( "False " ) ;
        }
    }
}






















