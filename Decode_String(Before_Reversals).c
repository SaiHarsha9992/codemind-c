#include <stdio.h>
int main ( )
{
    int t ;
    scanf ( "%d" , &t ) ;
    while ( t-- ) 
    {
        int a , b  ;
        scanf( "%d%d" , &a , &b ) ;
        char s [ a ] ; 
        scanf( "%s" , s ) ;
        while ( b > 1 )
        {
            char s1 [ b ] ;
            for (int i = 0 ; i < b ; i++ )
            {
                s1 [ i ] = s [ i ] ;
            }
            for ( int i = 0 ; i < b ; i++ )
            {
                s [ i ] = s1 [ b - i - 1 ] ;
            }
            b-- ;
        }
        printf ( "%s
" , s ) ;
    }
}