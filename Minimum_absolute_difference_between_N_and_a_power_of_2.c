#include <stdio.h>
int main ( )
{
    int  n , ln = 2 , rn = 2 ;
    scanf ( "%d" , &n ) ;
    for ( ; ln * 2 <= n ; ) //4 8
    {
        ln = ln * 2 ;  //4 8 -- 8
    }
    for ( ; rn <= n ; ) //2 4
    {
        rn = rn * 2 ; // 4 8
    }
    if (n - ln < rn - n )
    {
        printf ( "%d" , n - ln ) ;
    }
    else
    {
        printf ( "%d" , rn - n ) ;
    }
}