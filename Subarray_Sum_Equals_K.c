#include <stdio.h>
int main ( )
{
    int n , k , c = 0 ;
    scanf ( "%d%d" , &n , &k ) ;
    int a [ n ] , i , j , s = 0 ;
    for ( i= 0 ; i <n ; i++ )
    {
        scanf ( "%d" , &a [ i ] ) ;
    }
    for ( i = 0 ; i < n ; i++ )
    {
        s = 0 ;
        for( j = i ; j < n ; j++ )
        {
            s += a [ j ] ;
            if ( s == k )
            {
                c++ ;
            }
        }
    }
    printf ( "%d" , c ) ;
}