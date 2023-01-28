#include <stdio.h>
int main ( )
{
    char s [ 100 ] ;
    scanf ( "%s" , s ) ;
    int p = 0 , c = 0 ;
    for ( int i = 0 ; s [ i ] != NULL ; i++ )
    {
     if ( s [ i ] == 'a' || s [ i ] == 'e' || s [ i ] == 'i' || s [ i ] == 'o' || s [ i ] == 'u')
     {
                c++ ;
     }
     else
     {
         c = 0 ;
     }
       if ( p < c ) 
        {
            p = c ;
        }
    }
    printf ( "%d" , p ) ;
}