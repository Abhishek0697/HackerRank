#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,t=0;
    scanf("%d",&n);
   int A[n],B[n];
    for(int i = 0; i < n; i++){
       scanf("%d",&A[i]);
    }

    int min=100002;
    for(int j = 0; j < n; j++){
          int s=A[j],m=1;int k=1;
          B[0]=j;
          while(j+k<n){if(s==A[j+k]){B[m]=j+k;m++;t=1;}k++;}
          for(int r=0;r<=m-2;r++){int d=B[r+1]-B[r];if(d<min){min=d;}}
    }
    if(t==0){printf("-1");}
    else printf("%d",min);
    return 0;
}
