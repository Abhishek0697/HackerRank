#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main() {
    int t;
    scanf("%i", &t);
    for(int a = 0; a < t; a++){
        int n,max=1,min=1000;
        scanf("%i", &n);
        int X[n];
        for (int i = 0; i < n; i++) {
           scanf("%i",&X[i]);
           if(X[i]>max){max=X[i];}
           if (X[i]<min){min=X[i];}
        }

        printf("%d\n",max-min);
    }
    return 0;
}
