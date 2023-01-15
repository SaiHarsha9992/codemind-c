#include <stdio.h>
int main ( )
{
    int n , i , c = 0 , d = 0 ;
    scanf ( "%d" , &n ) ;
    int a [ 100 ] ;
    for ( i = 0 ; i < n ; i++ )
    {
        scanf ( "%d" , &a [ i ] ) ;
        if ( a [ i ] % 2 == 0 )
        {
            c++ ;   
        }
        else
        {
            d++ ;
        }
        
    }
    printf ( "%d %d" , c , d ) ;
}