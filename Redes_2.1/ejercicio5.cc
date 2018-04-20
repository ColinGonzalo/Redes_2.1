#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <errno.h>
#include <time.h>


int main() {
   int i = 0;
double accum;
double segundos;
double nsegundos;
    struct timespec start, stop;

 if( clock_gettime( CLOCK_REALTIME, &start) == -1 ) {
      perror( "clock gettime" );
      exit( EXIT_FAILURE );
    }

	while (i < 10000){
	i++;	
	}

    if( clock_gettime( CLOCK_REALTIME, &stop) == -1 ) {
      perror( "clock gettime" );
      exit( EXIT_FAILURE );
    }


 accum =( stop.tv_sec - start.tv_sec)
+  powl(10,-9) *( stop.tv_nsec - start.tv_nsec);

    printf( "%lf segundos \n", accum );
    return 1;
}

