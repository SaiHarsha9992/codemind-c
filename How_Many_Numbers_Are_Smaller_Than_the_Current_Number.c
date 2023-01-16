#include <stdio.h>
int main ( )
{
    int n ; 
    scanf ( "%d" , &n ) ;
    int a [ n ] , t , c = 0 ;
    for ( int  i = 0 ; i < n ; i++ )
    {
        scanf ( "%d" , &a [ i ] ) ;
    }
    for( int  i = 0 ; i < n ; i++ )
    {
        t = a [ i ];
        c = 0 ;
        for ( int j = 0 ; j < n ; j++ )
        {
            if( a [ j ] < t )
            {
                c++ ;
            }
        }
        printf ( "%d " , c ) ;
    }
}