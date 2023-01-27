#include <stdio.h>
int main ( )
{
    int n ;
    scanf ( "%d" , &n ) ;
    int a [ n ] , c = 0 , p = 0 ;
    for ( int i = 0 ; i < n ; i++ )
    {
        scanf ( "%d" , &a [ i ] ) ;
    }
    for ( int i = 0 ; i < n ; i++ )
    {
      if ( a [ i ] == 1 )
      {
          c++ ;
      }
      if ( a [ i ] == 0)
      {
          if  ( p < c )
          {
              p = c ;
          }
          c = 0 ;
      }
    }
    if ( p < c )
    {
        p = c ;
    }
    printf ( "%d" , p ) ;
}