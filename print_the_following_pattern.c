#include <stdio.h>
int main ( )
{
    int n ;
    scanf ( "%d" , &n ) ;
    for (int i = n ; i >= 1 ; i-- )
    {
        for ( int j = 1 ; j < i ; j++ )
        {
            printf (" ") ;
        }
        for ( int k = 1 ; k <= n ; k++ )
        {
            if ( i == 1 || i == n || k == 1 || k == n )
            printf ( "*" ) ;
            else
            printf ( " " ) ;
        }
        printf ( "
" ) ;
    }
}