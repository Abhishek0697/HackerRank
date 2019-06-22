#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,m=0;
    scanf("%d",&n);
    int c[n];
    for(int i = 0; i <= n-1; i++){
       scanf("%d",&c[i]);
    }
    int j=0;
    while(j<=n-3){

        if(c[j+2]==0){m++;
                      j=j+2;}
        else{m++;j++;}
       }
    if(j==n-2){m++;}
    printf("%d",m);
    return 0;
}
