#include <stdio.h>
int main ()
{
    int t ; 
    scanf ( "%d" , &t ) ;
    while ( t-- )
    {
        int n , c=0 ;
        scanf ( "%d" , &n ) ;
        for ( int i = 1 ; i <= n ; i++ )
        {
            if ( i * i == n )
            {
                c++ ;
            }
        }
        if ( c == 1 )
        {
            printf ( "True
" ) ;
        }
        else
        {
            printf ( "False
" ) ;
        }
    }
}