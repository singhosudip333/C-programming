#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
      int raw= n-1 , col = n-1 , i , j;
      for (i=0; i<raw ; i++) {
          for (j=0; j<col; j++) {
              printf("%d " , i ) ;

          }
           printf("\n") ;
      }
    return 0;
}
