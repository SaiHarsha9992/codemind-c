#include <stdio.h> 
int main ( )
{
   char s [ 100 ] ;
   scanf ( "%[^
]s" , s ) ;
   int c = 0 , d = 0 , e = 0 , f = 0 ;
   for ( int i = 0 ; s [ i ] != NULL ; i++ )
   {
       if ( s [ i ] == 65 || s [ i ] == 69 || s [ i ] == 73 || s [ i ] == 79 || s [ i ] == 85 || s [ i ] == 97 || s [ i ] == 101 || s [ i ] == 105 || s [ i ] == 111 || s [ i ] == 117 )
       {
           c++ ;
       }
       else if ( s [ i ] >= 65 && s [ i ] <= 90 || s [ i ] >= 97 && s [ i ] <= 122 && s [ i ] != 65 && s [ i ] != 69 && s [ i ] != 73 && s [ i ] != 79 && s [ i ] != 85 && s [ i ] != 97 && s [ i ] != 101 && s [ i ] != 105 && s [ i ] != 111 && s [ i ] != 117)
       {
           d++ ;
       }
       else if ( s [ i ] >= 48 && s [ i ] <= 57 )
       {
           e++ ;
       }
       else if ( s [ i ] == ' ' )
       {
           f++ ;
       }
   }
   printf ( "Vowels: %d
" , c ) ;
   printf ( "Consonants: %d
" , d ) ;
   printf ( "Digits: %d
" , e ) ;
   printf ( "White spaces: %d
" , f ) ;
}