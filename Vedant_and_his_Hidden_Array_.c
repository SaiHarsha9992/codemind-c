#include <stdio.h>
int main (  )
{
    int t ;
    scanf ( "%d" , &t ) ;
    while ( t-- ) 
    {
        long long int a , b ;
        scanf ( "%lld%lld" , &a , &b ) ;
        if ( a == 1 )
        {
            if ( b % 2 == 0 )
            {
                printf  ( "Even
" ) ; 
            }
            else
            {
                printf ( "Odd
" ) ;
            }
        }
        else if ( b % 2 == 0 )
        {
            printf ( "Impossible
" ) ;
        }
        else if ( a % 2 == 0 )
        {
            printf ( "Even
" ) ;
        }
        else
        {
            printf ( "Odd
" );
        }
    }
    return 0;
}