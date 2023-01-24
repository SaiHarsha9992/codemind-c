#include <stdio.h>
int main ( ) 
{
    int n ;
    scanf ( "%d" , &n ) ;
    int a [ n ] , s = 0 ;
    for ( int i = 0 ; i < n ; i++ )
    {
        scanf ( "%d" , &a [ i ] ) ;
        s = s * 10 + a [ i ] ;
    }
    s = s + 1 ;
    int t = s , r , c = 0 ;
    while ( t != 0 )
    {
        r = t % 10 ;
        a [ c++ ] = r ;
        t = t / 10 ;
    }
    for ( int i = c - 1 ; i >= 0 ; i-- )
    {
        printf ( "%d " , a [ i ] ) ;
    }
    
    
    
}