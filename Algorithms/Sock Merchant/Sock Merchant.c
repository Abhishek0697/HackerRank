#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n,sum=0;
    scanf("%i", &n);
    int A[n],C[n];
    for(int i = 0; i < n; i++){
       scanf("%i",&A[i]);
    }int temp;

    for(int i = 0; i <=n-2; i++){
         for(int j = 0; j <=n-2; j++){
                if(A[j]>A[j+1]){temp=A[j+1];A[j+1]=A[j];A[j]=temp;}
    }
    }int j=0;int count;

    for(int i = 1; i < n; i++){
       count=1;
       while(A[i]==A[i-1]){count++;i++;}
       C[j]=count;j++;
    }
    for(int k=0;k<=j-1;k++)
    {sum=sum+(C[k]/2);}    printf("%d\n",sum);
    return 0;
}
