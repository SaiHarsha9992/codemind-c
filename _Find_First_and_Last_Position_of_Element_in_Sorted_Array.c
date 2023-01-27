#include <stdio.h>
int main ( )
{
    int n , k ;
    scanf ( "%d" , &n ) ;
    int a [ n ] , c = 0 , d = 0 ;
    for ( int i = 0 ; i < n ; i++ )
    {
        scanf ( "%d" , &a [ i ] ) ;
    }
    scanf ( "%d" , &k ) ; 
    for ( int i =  0 ; i < n ; i++ )
    {
        if ( a [ i ] == k ) 
        {
            printf ( "%d " , i ) ;
            c++ ;
            break ;
        }
    }
    for ( int j =  n-1 ; j >= 0 ; j-- )
    {
        if ( a [ j ] == k ) 
        {
            printf ( "%d " , j ) ;
            d++ ;
            break ;
        }
    }
    if ( c == 0  && d == 0)
    {
        printf ( "-1 -1" ) ;
    }
}