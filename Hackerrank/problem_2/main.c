#include <stdio.h>
#include <stdlib.h>

int max( int p , int q)
{
    int y = p > q ? p : q ;
        return y ;
}

int max_of_four(int a , int b , int c , int d)
{
    int x = max(a , max(b , max(c , d))) ;
    return x ;
}

int main() {
    int a, b, c, d ;
    scanf("%d %d %d %d",  &a , &b , &c , &d) ;

    int ans = max_of_four(a, b, c, d) ;
    printf("%d", ans) ;

    return 0;
}
