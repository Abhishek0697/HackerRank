#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i = 0; i < n; i++){
       scanf("%d",&A[i]);
    }
    for(int j = n-1; j >= 0; j--){
       printf("%d ",A[j]);
    }

    return 0;
}
