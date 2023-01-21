#include <stdio.h>
int main ( ) 
{
    char ch [ 1000 ] , a ;
    int c = 0 ;
    scanf ( "%[^
]s" , ch ) ;
    scanf ( "%s" , &a ) ;
    for ( int i = 0 ; ch [ i ] != NULL ; i++ )
    {
            if ( ch [ i ] == a ) 
            {
                
                c++ ;
            }
    }
    if ( c > 0 )
    {
        printf ( "%d" , c ) ;
    }
    else
    {
        printf ( "-1" ) ;
    }
    }
    