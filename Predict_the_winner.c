#include <stdio.h>
#include <math.h>
int main ( )
{
    int n ; 
    scanf ( "%d" , &n ) ;
    int a [ n ] , s = 0 , s1 = 0 , s2 ;
    for ( int i = 0 ; i < n ; i++ )
    {
        scanf ( "%d" , &a [ i ] ) ;
    }
    for (int i = 0 ; i < n ; i++ )
    {
        if ( i % 2 == 2 )
        {
            s = s + a [ i ] ; 
        }
        else
        {
            s1 = s1 + a [ i ] ;
        }
    }
    s2 = abs (s - s1 ) ;
    if ( s2 % 4 == 0 )
    {
        printf ( "X" ) ;
    }
    else
    {
        printf ( "Y" ) ;
    }
    }