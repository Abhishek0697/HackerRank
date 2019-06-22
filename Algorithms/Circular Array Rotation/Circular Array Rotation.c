#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    int k;
    int q;
    scanf("%d %d %d",&n,&k,&q);
    int A[3*n];
    for(int i = 0; i < n; i++){
       scanf("%d",&A[i]);
       A[n+i]=A[i];
    }k=k%n;
    int s=n-k;
    for(int a = 0; a < q; a++){
        int m;
        scanf("%d",&m);
        printf("%d\n",A[m+s]);
    }
    return 0;
}
