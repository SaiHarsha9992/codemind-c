#include <stdio.h>
int main ( )
{
   char s [ 100 ] , c = 1 ;
   scanf ( "%s" , s ) ;
   int p = 1  ;
   for ( int i = 0 ; s [ i ] != NULL ; i++ )
   {
           if  ( s [ i ] == s [ i + 1  ] )
           {
               c++ ;
           }
           else
           {
               if ( p < c )
               {
                  p = c ;
               }
               c = 1 ;
           }
       }
       if ( p < c )
       {
           p = c ;
       }
       printf ( "%d" , p ) ;
   }