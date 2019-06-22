#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int H,i,j;
    int W;
    scanf("%i %i", &H, &W);
    int sum=0;
    sum=2*H*W;
    int A[H+2][W+2];
    for (i =0; i<=H+1;i++) {
       for ( j = 0; j <=W+1; j++) {

           A[i][j]=0;

       }
    }
    for (i = 1; i <=H;i++) {
       for ( j = 1; j <=W;j++) {

          scanf("%i",&A[i][j]);


       if(A[i][j]>A[i][j-1]){sum=sum+(A[i][j]-A[i][j-1]);}
       if(A[i][j]>A[i-1][j]){sum=sum+(A[i][j]-A[i-1][j]);}
       }
    }


   for ( i = H; i>=1; i--) {
       for ( j = W; j>=1; j--) {
        if(A[i][j]>A[i][j+1]){sum=sum+(A[i][j]-A[i][j+1]);}
        if(A[i][j]>A[i+1][j]){sum=sum+(A[i][j]-A[i+1][j]);}
            }
   }

    printf("%d",sum);
    return 0;
}
