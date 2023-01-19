#include <stdio.h>
int main ( ) 
{
    int n , m ;
    scanf ( "%d %d" , &n , &m ) ;
    int a [ n ] [ m ] ;
    for ( int i = 0 ; i < n ; i++ ) 
    {
        for ( int j = 0 ; j < m ; j++ ) 
        {
            scanf ( "%d" , &a [ i ] [ j ] ) ;
        }
    }
    int max = 0 , max1 = 0 ;
    for ( int i = 0 ; i < n ; i++ ) 
    {
        int s = 0 ;
        for ( int j = 0 ; j < m ; j++ ) 
        {
            s = s + a[ i ] [ j ] ;
        }
        if ( max < s )
        {
            max = s ;
        }
    } 
     for ( int j = 0 ; j < m ; j++ ) 
    {
        int s1 = 0 ;
        for ( int i = 0 ; i < n ; i++ ) 
        {
            s1 = s1 + a[ i ] [ j ] ;
        }
        if ( max1 < s1 )
        {
            max1 = s1 ;
        }
    } 
    if ( max < max1 )
    {
        max = max1 ;
    }
    printf ( "%d" , max ) ;
}