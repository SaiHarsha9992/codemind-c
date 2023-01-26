#include <stdio.h>
int prime ( int n )
{
    int i , c = 0 ;
    for ( i = 2 ; i <= n / 2  ; i++ )
    {
        if ( n % i == 0 )
        {
            c++ ;
        }
    }
    if ( c == 0 )
    return 1;
    else
    return 0 ;
}
int main ( )
{
    int a , b , c , i ;
    scanf ( "%d%d" , &a , &b ) ;
    c = a + b ;
    for ( i = 1 ; ; i++ )
    {
        if ( prime ( c + i ) )
        {
            printf ( "%d" , i ) ;
            break;
        }
    }
}