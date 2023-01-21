#include <stdio.h>
int main ( ) 
{
    int t ;
    scanf ( "%d" , &t ) ;
    while ( t-- )
    {
     char s [ 100 ] ;
    scanf ( "%s" , s ) ;
    int c = 0 ;
    for ( int i = 0 ; s [ i ] != NULL ; i++ )
    {
        if ( s [ i ] >=48 && s [ i ] <= 57 )
        {
            c++ ;
        }
    }
    if ( c > 0 )
    {
        printf ( "Yes
"  ) ;
    }
    else
    {
        printf ( "No
" ) ;
    }   
    }
}