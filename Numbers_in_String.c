#include <stdio.h>
int main ( )
{
    char s [ 1000 ] ;
    scanf ( "%[^
]s" , s ) ;
    int sum = 0 ; 
    for ( int  i = 0 ; s [ i ] != NULL ; i++ )
    {
        if ( s [ i ] >=48 && s [ i ] <= 57 )
        {
            sum = sum + int ( s [ i ] - '0' ) ;
        }
    }
    printf ( "%d" , sum ) ; 
}