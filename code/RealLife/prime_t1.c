# include <stdlib.h>
# include <stdio.h>
# include <omp.h>
#define n 400000

int main ( ) {
  int i;
  int j;
  int prime;
  int total = 0;

	omp_set_num_threads(1);
#pragma omp parallel for   schedule(dynamic) private ( i, j, prime )  reduction ( + : total )
  for ( i = 2; i <= n; i++ )
  {
    prime = 1;

    for ( j = 2; j < i; j++ )
    {
      if ( i % j == 0 )
      {
        prime = 0;
        break;
      }
    }
    total = total + prime;
  }

	printf("\n Total primes between 1 and %d are %d\n",n,total);
  return 0;
}
