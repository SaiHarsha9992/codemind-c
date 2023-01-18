#include <stdio.h>
#include <math.h>
int main ( )
{
    int n , s = 0 , p , q ;
    scanf( "%d" , &n ) ;
    int x = n - 1 ;
    int a [ n ] ;
    for(int i = 0 ; i < n ; i++ )
    {
        scanf( "%d" , &a [ i ] ) ;
    }
    for(int i = 0 ; i < n ; i++ )
    {
      p = pow ( 2 , x ) ; 
      q = a [ i ] * p ; 
      s = s + q ;
      x-- ;
    }
    printf( "%d " , s ) ;
}