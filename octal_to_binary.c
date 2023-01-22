#include <stdio.h>
#include <math.h>
int main ( )
{
    int n , c = 0 , s = 0 , d , r , p ;
    scanf ( "%d" , &n ) ;
    while ( n != 0 )
    {
        r = n % 10 ;
        d = d + r * pow ( 8 , c ) ;
        c++ ;
        n = n / 10 ;
    }
    int rem , i , a [ 100 ];
    while ( d != 0 )
    {
        rem = d % 2 ;
        d = d / 2 ;
        a [ i++ ] = rem ;
    }
    for ( int j = i - 1 ; j >= 0 ; j-- )
    {
        printf ( "%d" , a [ j ] ) ;
    }   
}