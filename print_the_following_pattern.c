#include <stdio.h>
int main ()
{
    int x ;
    scanf ( "%d" , &x ) ;
    for ( int i = 1 ; i <= x ; i++ )
    {
        for ( int j = x ; j > i ; j-- )
        {
            printf (" ") ;
        }
        for ( int k = 1 ; k <= 2 * i - 1 ; k++ )
        {
            printf ( "%d" , i ) ;
        }
        printf ("
") ;
    }
}