#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main() {
    int n;
    int k,p=0;
    scanf("%i %i", &n, &k);
    int a[n];
    for(int i = 0; i < n; i++){
       scanf("%i",&a[i]);
    }
    for(int i = 0; i <= n-2; i++){
        for(int j = i; j <=n-2; j++){
          if((a[i]+a[j+1])%k==0)
          {
            p=p+1;}

        }
    }
    printf("%d", p);
    return 0;
}
