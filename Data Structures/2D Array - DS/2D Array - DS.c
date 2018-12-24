#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int totalsum=-1000,sum=0;
    int A[6][6];
    for(int i = 0; i < 6; i++){
       for(int j = 0; j < 6; j++){
                    scanf("%d",&A[i][j]);
              }
    }
       for(int m = 0; m <=3 ; m++){
            for(int n = 0; n <=3 ; n++){
                sum=A[m][n]+A[m][n+1]+A[m][n+2]+A[m+1][n+1]+A[m+2][n]+A[m+2][n+1]+A[m+2][n+2];
                if(sum>totalsum){totalsum=sum;}
                sum=0;
            }

       }



    printf("%d",totalsum);


    return 0;
}
