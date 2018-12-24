#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long T,N,a;
    scanf("%ld",&T);
    for(int a0 = 0; a0 < T; a0++){

        scanf("%ld",&N);

        if (N>=2)
      {

            a=N*(N-1)/2;
         printf("%ld\n",a);
        }
            else if(N<2)
         {
         printf("0\n");
         }


    }
    return 0;
}
