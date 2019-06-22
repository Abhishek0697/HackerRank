#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int k;
    scanf("%i", &k);
    long int sum=0,n=0;
    for(int i=k-1;i>0;i--){
        n=n+i;
    }
    n=3+(n-1)*2;
    while(k!=0){
    sum=sum+n;
        n=n+2;
        k--;
    }

    printf("%ld\n", sum);
    return 0;
}
