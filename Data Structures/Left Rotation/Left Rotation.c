#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n;
    int d,w=0;
    scanf("%i %i", &n, &d);
 int a[3*n];
    for (int i = 0; i < n; i++) {
       scanf("%i",&a[i]);
        a[n+w]=a[i];w++;
    }

    int r=d;
for (int l = 0; l <= n-1; l++) {

    printf("%i ",a[r]);r++;
    }




    return 0;
}
