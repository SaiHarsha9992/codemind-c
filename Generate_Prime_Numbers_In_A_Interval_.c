#include <stdio.h>
int prime ( int n )
{
    int c = 0 ;
    for ( int i = 1 ; i <= n  ; i++ )
    {
        if ( n % i == 0 )
        {
            c++ ;
        }
    }
    if ( c == 2 )
    {
        return 1 ;
    }
    else
    {
        return 0 ;
    }
}
int main ( )
{
    int a , b ;
    scanf ( "%d %d" , &a , &b ) ;
    for ( int i = a ; i <= b ; i++ )
    {
        int x = prime ( i ) ;
        if ( x == 1 )
        {
            printf ( "%d
" , i ) ;
        }
    }
}