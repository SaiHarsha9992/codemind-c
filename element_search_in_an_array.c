#include <stdio.h>
int main ( )
{
    int n ;
    scanf ( "%d" , &n ) ;
    int a [ n ] , val , c = 0 ;
    for ( int i = 0 ; i < n ; i++ )
    {
        scanf ( "%d" , &a [ i ] ) ;
    }
    scanf ( "%d" , &val ) ;
    for ( int i = 0 ; i < n ; i++ ) 
    {
        if ( a [ i ] == val )
        {
            c++ ;
        }
    }
    if ( c > 0 )
    {
        printf ( "True" ) ;
    }
    else
    {
        printf ( "False" ) ;
    }
}