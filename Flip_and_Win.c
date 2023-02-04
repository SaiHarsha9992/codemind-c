#include<stdio.h>
#include <string.h>
#include <math.h>
int main ( )
{
    int n , sum = 0 ;
    char s [ 10000 ] ;
    scanf ( "%d" , &n ) ;
    scanf ( "%s" , s ) ;
    for ( int i = 1 ; s[i] != NULL ; i++ )
    {
        sum += abs ( s [ i ] - s [ i - 1 ] ) ;
    }
    sum = n - sum - 1 ;
    if ( sum % 3 == 0)
    printf ( "Sudhir" ) ;
    else
    printf("Ashok");
}