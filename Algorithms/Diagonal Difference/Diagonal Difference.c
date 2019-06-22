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
    long int a[n][n];long int r=0,s=0;
    for(int i = 0; i < n; i++){
       for(int j = 0; j < n; j++){

          scanf("%ld",&a[i][j]);
           if(i==j)
           {r=r+a[i][j];}
           if(i+j==n-1)
           {s=s+a[i][j];}

       }

    }
    long int x=r-s;
    long int y= abs(x);
    printf("%ld",y);
    return 0;
}
