#include <stdio.h>
int main ( )
{
    int t ;
    scanf ( "%d" , &t ) ;
    while ( t-- )
    {
        int n ;
        scanf ( "%d" , &n ) ;
        int a [ n ] , c = 0 ;
        for ( int i = 0 ; i < n ; i++ )
        {
            scanf ( "%d" , &a [ i ] ) ;
            if ( a [ i ] % 2 != 0 )
            {
                c++ ;
            }
        }
        if ( c % 2 != 0 )
        {
            c-- ;
        }
        printf ( "%d
" , c / 2 ) ;
    }
}