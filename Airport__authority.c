#include <stdio.h>
int main ( )
{
    int n , t ;
    scanf ( "%d" , &n ) ;
    int a [ n ] ;
    for ( int  i = 0 ; i < n ; i++ )
    {
        scanf ( "%d" , &a [ i ] ) ;
    }
    scanf ( "%d" , &t ) ;
    int c = 0 , d = 0 ; 
    for ( int  i = 0 ; i < n ; i++ )
    {
        if ( a [ i ] > t )
        {
            c++ ;
        }
        else
        {
            d++ ;
        }
        if( c > 0 )
       {
           c = c + 1 ;
       }
    }
    printf ( "%d" , c + d ) ;
    
}