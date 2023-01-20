#include <stdio.h>
int main ( )
{
    int n , c = 0 ;
    scanf( "%d" , &n ) ;
    int a [ n ] , i , j ;
    for( i = 0 ; i < n ; i++ )
    {
        scanf( "%d" , &a [ i ] ) ;
    }
    for( i = 0 ; i < n ; i++ )
    {
        c = 0 ;
        for( j = 0 ; j < n ; j++ )
        {
            if ( a [ i ] == a [ j ] && i != j )
            {
                c++ ;
            }
        }
        if( c == 0 )
        {
            printf ( "%d ", a [ i ] ) ;
        }
    }
}