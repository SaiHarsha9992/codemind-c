#include <stdio.h>
#include <string.h>
int main ( )
{
    char ch [ 1000 ] ;
    int c = 0 ;
    scanf ( "%s" , ch ) ;
    for ( int i = 0 ; i < strlen(ch) ; i++ )
    {
        if  ( ch [ i ] == '1' )
        {
            c++ ;
        }
    }
    printf ( "%d" , c ) ;
}