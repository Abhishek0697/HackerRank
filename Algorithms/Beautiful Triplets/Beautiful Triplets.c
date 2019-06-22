#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N,d,m=0;
    scanf("%d %d",&N,&d);
    int A[N];
    for(int i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    for(int i=0;i<=N-3;i++){
        for(int j=1;j<=N-2;j++){
            if(A[j]-A[i]==d){
            for(int k=2;k<=N-1;k++){
            if(A[k]-A[j]==d){m++;}
            }
            }
        }
    }
    printf("%d",m);
    return 0;
}
