#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%i", &n);
    long int a[11];long long result=0;
        for(int i = 0; i < n; i++){
        scanf("%ld",&a[i]);
        result=result+a[i];
    }
        printf("%lld\n", result);
    return 0;
}
