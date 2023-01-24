#include <stdio.h>
int main ( ) 
{
    char s [ 100 ] ;
    scanf ( "%[^
]s" , s ) ;
    int st , e ;
    scanf ( "%d %d" , &st , &e ) ;
    for ( int i = st ; i <= e ; i++ )
    {
        printf ( "%c" , s [ i ] ) ;
    }
}